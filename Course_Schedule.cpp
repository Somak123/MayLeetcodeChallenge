class Solution {
public:
    bool dfs(vector<int>*adj,int sv,bool* vis,bool* stk)
    {
        if(vis[sv]==false)
        {
            vis[sv]=true;
            stk[sv]=true;
        }
        for(auto i:adj[sv])
        {
            if(!vis[i] and dfs(adj,i,vis,stk))
                return true;
            else if(stk[i])
                return true;
        }
        stk[sv]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        
        
        vector<int>adj[n];
        for(int i=0;i<p.size();i++)
            adj[p[i][1]].push_back(p[i][0]);
        
        bool vis[n],stk[n];
        memset(vis,false,sizeof vis);
        memset(stk,false,sizeof stk);
        
        bool ans=true;
        for(int i=0;i<n;i++)
            if(!vis[i])
                if(dfs(adj,i,vis,stk))
                    return false;
        return true;
        
    }
};
