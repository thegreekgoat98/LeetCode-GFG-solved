class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        if(nums.size()<2)
            return false;
        unordered_map<int,int>mp; //{sum,ind}
        mp[0]=-1; //at the beginning we have sum=0 and index=-1
        int sum=0;
        for(int i=0;i<nums.size();++i)
        {
            sum+=nums[i];
            sum%=k;
            
            auto x=mp.find(sum);
            if(x!=mp.end())
            {
                if(i-mp[sum]>=2)
                    return true;
            }
            else
                mp[sum]=i;
        }
        return false;
    }
};