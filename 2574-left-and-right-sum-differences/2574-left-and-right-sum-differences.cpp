class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pf(n);
        pf[0]=nums[0];
        
        for(int i=1;i<n;++i)
            pf[i]=pf[i-1]+nums[i];
        
        for(int i=0;i<n;++i)
        {
            if(i==0)
                nums[i]=pf[n-1]-nums[i];
            else if(i==n-1)
                nums[i]=pf[i]-nums[i];
            else
                nums[i]=abs(pf[n-1]-pf[i-1]-pf[i]);
        }
        
        return nums;
    }
};