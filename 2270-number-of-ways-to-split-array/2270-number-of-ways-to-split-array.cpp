class Solution {
public://prefix sum concept
    int waysToSplitArray(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=0;
        vector<long long>pf(n);
        pf[0]=nums[0];
        for(int i=1;i<n;i++)
            pf[i]=pf[i-1]+nums[i];
        ///////////
        for(int i=0;i<n-1;i++)
        {
            if(pf[i]>=pf[n-1]-pf[i])
                cnt++;
        }
        
        return cnt;
    }
};