class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) 
    {
        int n=arr.size();
        int i=0,j=0;
        int curr=1;
        int ans=0;
        while(j<n)
        {
            curr*=arr[j];
            
            while(curr>=k and i<=j)
            {
                curr/=arr[i];
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        
        return ans;
    }
};