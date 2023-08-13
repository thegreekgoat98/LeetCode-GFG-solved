class Solution {
public:
    int n;
    int dp[100001];
    bool solve(int i,vector<int>&nums)
    {
        if(i==n) //base case
            return true;
        
        if(dp[i]!=-1)
            return dp[i];
        
        bool result=false;
        //RULE 1
        if(i+1<n && nums[i]==nums[i+1])
            result|=solve(i+2,nums);
        
        //RULE 2
        if(i+1<n && i+2<n && nums[i]==nums[i+1] && nums[i+1]==nums[i+2])
            result|=solve(i+3,nums);
        
        //RULE 3
        if(i+1<n && i+2<n && nums[i]+1==nums[i+1] && nums[i]+2==nums[i+2])
            result|=solve(i+3,nums);
        
        dp[i]=result;
        return result;
    }
    //////////////////
    bool validPartition(vector<int>& nums) 
    {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(0,nums);
    }
    
    
    //https://www.youtube.com/watch?v=tofpb5rIwRk --> CodestorywithMIK --> WHAT A LEGEND
};