class Solution {
public:
    bool bfs(int** adj,int color[],int src,int N)
    {
        queue<int>q;
        q.push(src);
        
        color[src]=1;
        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            if(adj[t][t]==1)
                return false;
            for(int i=0;i<N;i++)
            {
                if(adj[t][i]==1 and color[i]==-1)
                {
                    color[i]=1-color[t];
                    q.push(i);
                }
                else if(adj[t][i]==1 and color[i]==color[t])
                    return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        
        int** adj=new int*[N];
        for(int i=0;i<N;i++)
        {
            adj[i]=new int[N];
            for(int j=0;j<N;j++)
                adj[i][j]=0;
        }
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]-1][dislikes[i][1]-1]=1;
            adj[dislikes[i][1]-1][dislikes[i][0]-1]=1;
        }
        
        int color[N];
        memset(color,-1,sizeof color);
        
        
        for(int i=0;i<N;i++)
            if(color[i]==-1 and !bfs(adj,color,i,N))
                return false;
        return true;
    }
};
