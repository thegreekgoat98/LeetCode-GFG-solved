class Solution {
public:
    int uniquePaths(int n, int m) 
    {
        vector<vector<int>>dp(n,vector<int>(m));
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(i==n-1 || j==m-1)
                    dp[i][j]=1;
        
        for(int i=n-2;i>=0;--i)
            for(int j=m-2;j>=0;--j)
                dp[i][j]=dp[i][j+1]+dp[i+1][j];
        
        return dp[0][0];
                    
    }
};