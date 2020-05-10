class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int>v(N+1,0);
        int i;
        for(i=0;i<trust.size();i++)
        {
            v[trust[i][1]]++;
            v[trust[i][0]]--;
        }
        for(i=1;i<=N;i++)
        {
            if(v[i]==N-1)
                return i;
        }
        return -1;
    }
};
