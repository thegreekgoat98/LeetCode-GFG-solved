class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        int n=nums.size();
        map<int,int>mp;
        int i=0,j=0;
        int ans=INT_MIN;
        while(j<n)
        {
            mp[nums[j]]++;
            
            while((--mp.end())->first - mp.begin()->first > limit)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};

//https://leetcode.com/submissions/detail/844031276/ ----> saw my previous solution to this question. And understood