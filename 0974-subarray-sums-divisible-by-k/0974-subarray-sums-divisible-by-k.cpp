class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int>mp; //{sum,count}
        int sum=0;
        mp[sum]=1;
        for(int i=0;i<n;++i)
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
                mp[sum]=1;
        }
        return cnt;
    }
};