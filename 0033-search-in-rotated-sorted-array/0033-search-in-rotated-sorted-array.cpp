class Solution {
public:
    int findPivotIndex(vector<int>&nums) //Find the minimum element - revised Aditya Verma's video (7 Number of Times a Sorted array is Rotated)
    {
        int n=nums.size();
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int prev=(mid-1+n)%n;  // bhai yeh dekh... important h
            int next=(mid+1)%n;
            
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
                return mid;
            else if(nums[mid]<nums[r])
                r=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
    ///////////////////////////////////////////////////////
    int BinarySearch(int l, int r, vector<int>&nums, int target)
    {
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return -1;
    }
    ///////////////////////////////////////////////////////
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int idx=findPivotIndex(nums);
        
        
        int a=BinarySearch(0,idx-1,nums,target);
        int b=BinarySearch(idx,n-1,nums,target);
        cout<<"a:b"<<a<<" "<<b<<endl;
        return a>b?a:b;
    }
};


// https://www.youtube.com/watch?v=4WmTRFZilj8&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=7

