class Solution {
public:
    
    int climbStairs(int n) 
    {
        vector<long long>dp(46);
        dp[0]=dp[1]=1;
        for(long long i=2;i<=45;i++)
            dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
        
    }
};