class Solution {
public://PEPCODING
    int subarraySum(vector<int>& nums, int k) 
    {
        int sum=0;
        unordered_map<int,int>mp;
        mp[sum]=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            auto x=mp.find(sum-k);
            if(x!=mp.end())
                cnt+=x->second;
            mp[sum]++; 
        }
        return cnt;
    }
};
//what a brilliant explanation from SUMEET MALIK PEPCODING