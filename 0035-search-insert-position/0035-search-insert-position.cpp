class Solution {
public:
    int BinarySearch(int l,int r,int target,vector<int>& nums)
    {
        if(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                return BinarySearch(mid+1,r,target,nums);
            else
                return BinarySearch(l,mid-1,target,nums);
        }
        return l;
    }
    ////////
    int searchInsert(vector<int>& nums, int target)
    {
       return BinarySearch(0,nums.size()-1,target,nums);
    }
};