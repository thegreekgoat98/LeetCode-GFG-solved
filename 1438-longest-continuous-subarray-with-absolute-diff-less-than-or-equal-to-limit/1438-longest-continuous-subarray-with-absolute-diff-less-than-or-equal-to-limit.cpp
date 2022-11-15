class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        map<int,int>mp;
        int i=0,j=0;
        int maxLen=INT_MIN;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            while((--mp.end())->first-mp.begin()->first>limit)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                i++;
            }
            j++;
            maxLen=max(maxLen,j-i+1);
        }
        return maxLen-1;
    }
};