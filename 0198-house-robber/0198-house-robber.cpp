class Solution {
public:
    int n;
    int dp[101];
    int solve(int currInd,vector<int>&nums)
    {
        if(currInd>=n)
            return 0;
        
        if(dp[currInd]!=-1)
            return dp[currInd];
        int steal=nums[currInd]+solve(currInd+2,nums);
        int not_steal=solve(currInd+1,nums);
        
        return dp[currInd]=max(steal,not_steal);
    }
    /////////////////
    int rob(vector<int>& nums) 
    {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,nums);
  
    }
};
