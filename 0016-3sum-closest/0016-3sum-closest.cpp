class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int diff=INT_MAX;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int first=i;
            int start=i+1;
            int end=n-1;
            
            while(start<end)
            {
                int sum=nums[first]+nums[start]+nums[end];
                if(sum==target)
                    return target;
                else if(diff>abs(sum-target))
                {
                    diff=abs(sum-target);
                    ans=sum;
                }
                if(sum>target)
                    end--;
                else
                    start++;
            }
        }
        return ans;
    }
};