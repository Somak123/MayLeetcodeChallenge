class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        vector<vector<int>>ans;
        int i=0,j=0;
        while(i<A.size() and j<B.size())
        {
            int fi=A[i][0];
            int si=A[i][1];
            int fj=B[j][0];
            int sj=B[j][1];
            if(fi>sj)
                j++;
            else if(fj>si)
                i++;
            else
            {
                int ansf=max(fi,fj);
                int anss=min(si,sj);
                ans.push_back({ansf,anss});
                if(si<sj)
                    i++;
                else
                    j++;
            }
        }
        return ans;
    }
};
