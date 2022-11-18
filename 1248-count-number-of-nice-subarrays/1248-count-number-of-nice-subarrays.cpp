class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();++i)
        {
            int rem=nums[i]%2;
            sum+=rem;
            auto x=mp.find(sum-k);
            if(x==mp.end())
                mp[sum]++;
            else
            {
                mp[sum]++;
                ans+=mp[sum-k];
            }
                
        }
        return ans;
    }
};