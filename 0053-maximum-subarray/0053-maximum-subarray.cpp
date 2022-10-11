class Solution {
public:
     int maxSubArray(vector<int>& nums) 
    {
        int maxi=INT_MIN,curr=0;
        for(auto it:nums)
        {
            curr+=it;
            maxi=max(maxi,curr);
            if(curr<0)
                curr=0;
        }
        return maxi;
    }
    //KADANE's ALGORITHM- STRIVER's
};