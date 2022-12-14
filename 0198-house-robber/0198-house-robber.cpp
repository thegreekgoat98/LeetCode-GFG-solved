class Solution {
public:
    int rob(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>dp(n);
        dp[0]=arr[0];
        if(n>=2)
            dp[1]=max(arr[1],arr[0]);
        
        for(int i=2;i<n;++i)
            dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
        
        return dp[n-1];
    }
};