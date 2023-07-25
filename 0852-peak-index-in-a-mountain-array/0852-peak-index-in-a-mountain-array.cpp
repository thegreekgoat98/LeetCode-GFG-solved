class Solution {
public:
    bool predicate(int mid,vector<int>&arr)
    {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return true;
        return false;
    }
    /////////////////////
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int n=arr.size();
        
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid>0 && mid<n-1)
            {
                if(predicate(mid,arr))
                    return mid;
                else if(arr[mid]<arr[mid+1])
                    l=mid+1;
                else
                    r=mid-1;
            }
            else 
                return 1;
        }
        
        return -1;
    }
};