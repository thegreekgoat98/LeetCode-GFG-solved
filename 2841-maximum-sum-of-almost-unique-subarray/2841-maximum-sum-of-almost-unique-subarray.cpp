class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) 
    {
        int n=nums.size();
        int i=0,j=0;
        unordered_map<int,int>mp;
        long long currSum=0;
        long long ans=0;
        while(j<n)
        {
            mp[nums[j]]++;
            currSum+=nums[j];
            if(j-i+1<k)
                j++;
            else
            {
                if(mp.size()>=m)
                    ans=max(ans,currSum);
                    
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                currSum-=nums[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};