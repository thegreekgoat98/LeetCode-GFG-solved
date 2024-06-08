class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if(n<2)
            return false;
        unordered_map<int,int>mp;
        int sum=0;
        mp[sum]=-1;
        for(int i=0;i<n;++i)
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

// https://www.youtube.com/watch?v=20v8zSo2v18 --> can take reference from here --- almost same concept