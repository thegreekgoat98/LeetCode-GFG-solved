class Solution {
public:
    int minimumSumSubarray(vector<int>&nums)
    {
        int minSum=INT_MAX;
        int curr=0;
        for(int i=0;i<nums.size();++i)
        {
            curr+=nums[i];
            curr=min(curr,nums[i]);
            minSum=min(minSum,curr);
        }
        return minSum;
    }
    //////////////////////////////////
    int maximumSumSubarray(vector<int>&nums)
    {
        int maxSum=INT_MIN;
        int curr=0;
        for(int i=0;i<nums.size();++i)
        {
            curr+=nums[i];
            maxSum=max(maxSum,curr);
            if(curr<0)
                curr=0;
        }
        return maxSum;
    }
    ///////////////////////////////////
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int minSum=minimumSumSubarray(nums);
        int maxSum=maximumSumSubarray(nums);
        
        int maxCircularSum=sum-minSum;
        
        if(maxSum>0)
            return max(maxSum,maxCircularSum);
        
        return maxSum;
    }
};