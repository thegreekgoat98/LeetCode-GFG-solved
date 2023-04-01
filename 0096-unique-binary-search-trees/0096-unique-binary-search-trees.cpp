class Solution {
public:
    
    int solve(vector<int>&dp,int n)
    {
        if(n<=1)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        int ans=0;
        for(int i=1;i<=n;++i)
            ans+=solve(dp,i-1)*solve(dp,n-i);
        
        dp[n]=ans;
        return dp[n]=ans;
    }
    
    int numTrees(int n) 
    {
        vector<int>dp(n+1,-1);
        
        return solve(dp,n);
    }
    
//https://www.youtube.com/watch?v=ox7fOk3HjlA
    
};