class Solution {
public:
    int numSubseq(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0,r=n-1;
        int cnt=0;
        sort(nums.begin(),nums.end());
        //precompute the powers
        vector<int>power(n);
        power[0]=1;
        for(int i=1;i<n;++i)
            power[i]=(power[i-1]*2)%1000000007;
        
        //two pointer approach
        while(l<=r)
        {
            if(nums[l]+nums[r]<=target)
            {
                int p=power[r-l];
                cnt=(cnt%1000000007+power[r-l])%1000000007;
                l++;
            }
            else
            {
                r--;
            }
        }
        
        return cnt%1000000007;
    }
};