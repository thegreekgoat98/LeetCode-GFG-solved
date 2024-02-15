class Solution {
public:
    long long largestPerimeter(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long long>pf(n,0);
        
        pf[0]=nums[0];
        for(int i=1;i<n;++i)
            pf[i]=pf[i-1]+nums[i];
        //////////////////////////////////
        long long ans=-1;
        for(int i=0;i<n-1;++i)
        {
            if(pf[i]>nums[i+1])
                ans=max(ans,pf[i+1]);
        }
        
        return ans;
    }
};
//khud sochke kiya (after seeing related topics - (prefix sum))