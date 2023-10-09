class Solution {
public:
    vector<int>ans;
    int BSf(vector<int>& nums,int target)
    {
        int res=-1;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                res=mid;
                r=mid-1;
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;     
        }
        return res;
    }
    ///////
    int BSl(vector<int>& nums,int target)
    {
        int res=-1;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                res=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
    ///////
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int firstOcc=BSf(nums,target);
        int lastOcc=BSl(nums,target);
        
        return {firstOcc,lastOcc};
    }
};