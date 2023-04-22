class Solution {
public:
    int LCS(string x,string y)
    {
        int n=x.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=n;++j)
            {
                if(x[i-1]==y[j-1])
                   dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]); 
            }
        }
        
        return dp[n][n];
    }
    ////////////
    int minInsertions(string x) 
    {
        string y=x;
        reverse(x.begin(),x.end());
        
        return x.length()-LCS(x,y);
    }
};