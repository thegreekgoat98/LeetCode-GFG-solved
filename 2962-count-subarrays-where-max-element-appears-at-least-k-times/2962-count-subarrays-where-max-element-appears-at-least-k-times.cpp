class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k)
    {
        int n=nums.size();
        int max_ele=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        long long cnt=0;
        int i=0,j=0;
        while(j<n)
        {
            mp[nums[j]]++;
            
            while(mp[max_ele]>=k)
            {
                cnt+=(n-j);
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return cnt;
    }
};

// https://www.youtube.com/watch?v=zqNou9bjFck