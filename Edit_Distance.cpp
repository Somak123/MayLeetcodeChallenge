class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int dp[word2.length()+1][word1.length()+1];
        int i,j;
        for(j=0;j<=word1.length();j++)
            dp[0][j]=j;
        for(i=0;i<=word2.length();i++)
            dp[i][0]=i;
        for(i=1;i<=word2.length();i++)
        {
            for(j=1;j<=word1.length();j++)
            {
                if(word2[i-1]==word1[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
            }
        }
        
        return dp[word2.length()][word1.length()];
    }
};
