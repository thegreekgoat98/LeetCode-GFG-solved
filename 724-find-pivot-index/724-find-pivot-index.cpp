class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pf(n);
        pf[0]=nums[0];
        for(int i=1;i<n;++i) //creating the prefix sum array
            pf[i]=pf[i-1]+nums[i];
        
        for(int i=0;i<n;++i)
        {
            if(i==0)
            {
                if(pf[n-1]-pf[i]==0)
                    return i;
            }
            else if(i==n-1)
            {
                if(pf[n-2]==0)
                    return i;
            }
            else if(pf[i-1]==pf[n-1]-pf[i])
                return i;
        }
        return -1;
    }
};