class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size(),m=nums2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(dp,0,0,nums1,nums2);
    }
    
    int solve(vector<vector<int>>&dp,int i,int j,vector<int>&nums1,vector<int>&nums2)
    {
        if(i==nums1.size() || j==nums2.size())
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(nums1[i]==nums2[j])
            return dp[i][j]=1+solve(dp,i+1,j+1,nums1,nums2);
        
        return dp[i][j]=max(solve(dp,i,j+1,nums1,nums2),solve(dp,i+1,j,nums1,nums2));
    }
};