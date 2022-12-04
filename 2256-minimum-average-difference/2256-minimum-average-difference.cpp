class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n=nums.size();
        vector<long>pf(n);
        pf[0]=nums[0];
        for(int i=1;i<n;++i)
            pf[i]=pf[i-1]+nums[i];
        ////////////////////////////////
        int ind=0;
        long mini=LLONG_MAX;
        //from index 0 to n-2
        for(int i=0;i<n-1;++i)
        {
            long a=pf[i]/(i+1);
            long b=(pf[n-1]-pf[i])/(n-i-1);
            long diff=abs(a-b);
            
            if(diff<mini)
            {
                ind=i;
                mini=diff;
            }
        }
        
        //for index n-1
        if(mini>pf[n-1]/n)
        {
            mini=pf[n-1]/n;
            ind=n-1;
        }
        
        
        return ind;
    }
};