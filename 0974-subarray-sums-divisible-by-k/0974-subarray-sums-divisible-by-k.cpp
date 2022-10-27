class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp; //{rem,freq}
        mp[0]=1;
        int cnt=0;
        int sum=0;
        for(int i=0;i<nums.size();++i)
        {
            sum+=nums[i];
            sum%=k;
            
            if(sum<0)
                sum+=k;
            
            auto x=mp.find(sum);
            if(x!=mp.end())
            {
                cnt+=x->second;
                mp[sum]++;
            }
            else
            {
                mp[sum]=1;
            }
        }
        return cnt;
    }
};