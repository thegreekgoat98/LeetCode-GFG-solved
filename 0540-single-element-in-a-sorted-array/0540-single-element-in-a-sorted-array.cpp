class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        int l=0,r=nums.size()-1;
        //boundary case
        if(r==0)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
         if(nums[n-1]!=nums[n-2])
            return nums[n-1];
        
        //Binary Search
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
            else if(((mid%2)!=0 && nums[mid]==nums[mid-1]) || (mid%2)==0 && nums[mid]==nums[mid+1])
                l=mid+1;
            else
                r=mid-1;
        }
        return -1;
    }
};