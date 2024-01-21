class Solution {
public:
    int n;
    int dp[101];
    int solve(vector<int>&arr,int currInd)
    {
        if(currInd>=n)
            return 0;
        if(dp[currInd]!=-1)
            return dp[currInd];
        int steal=arr[currInd]+solve(arr,currInd+2);
        int not_steal=solve(arr,currInd+1);
        
        return dp[currInd]=max(steal,not_steal);
    }
    /////////////////////////////
    int rob(vector<int>& nums) 
    {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};