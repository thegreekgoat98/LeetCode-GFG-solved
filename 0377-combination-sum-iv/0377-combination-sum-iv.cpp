class Solution {
public:
    int n;
    int dp[201][1001];
    int solve(int ind,vector<int>&nums,int target)
    {
        if(target==0)
            return 1;
        if(ind==n || target<0)
            return 0;
        
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        
        int take=solve(0,nums,target-nums[ind]);
        int skip=solve(ind+1,nums,target);
        
        return dp[ind][target]=take+skip;
    }
    ////////////////////////////
    int combinationSum4(vector<int>& nums, int target) 
    {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,nums,target);
    }
};
//CODESTORYWITHMIK -- MAGICIAN