class Solution {
public:
    
    long long predicate(int x,vector<int>&nums,vector<int>&cost)
    {
        long long ans=0;
        for(long long i=0;i<nums.size();++i)
            ans+=(long long)abs(x-nums[i])*cost[i];
        
        return ans;
    }
    /////////////////////////////////////////////////////////////
    long long minCost(vector<int>& nums, vector<int>& cost)
    {
        long long l=*min_element(nums.begin(),nums.end());
        long long r=*max_element(nums.begin(),nums.end());
        
        long long res=LLONG_MAX;
        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            long long forMid=predicate(mid,nums,cost);
            
            res=min(res,forMid);
            
            long long forLeft=predicate(mid-1,nums,cost);
            long long forRight=predicate(mid+1,nums,cost);
            
            if(forLeft<forRight)
                r=mid-1;
            else
                l=mid+1;
        }
        
        return res;
    }
    //https://www.youtube.com/watch?v=lGo6E8jiDB8 --- MIK legend
};