class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int dp[matrix.size()][matrix[0].size()];
        for(int i=0;i<matrix.size();i++)
            if(matrix[i][0]==1)
                dp[i][0]=1;
            else
                dp[i][0]=0;
        for(int i=0;i<matrix[0].size();i++)
            if(matrix[0][i]==1)
                dp[0][i]=1;
            else
                dp[0][i]=0;
        
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==1)
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                else
                    dp[i][j]=0;
            }
        }
        int maxi=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
                maxi+=dp[i][j];
        }
        return maxi;
    }
};
