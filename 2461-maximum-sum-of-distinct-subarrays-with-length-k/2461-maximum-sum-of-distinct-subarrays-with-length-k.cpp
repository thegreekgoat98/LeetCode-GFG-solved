class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int n=nums.size();
        long long sum=0;
        long long ans=0;
        
        while(j<n)
        {
            sum+=nums[j];
            mp[nums[j]]++;
            
            if(j-i+1<k)
                j++;
            else
            {
                if(mp.size()==k)
                    ans=max(ans,sum);
                
                mp[nums[i]]--;
                sum-=nums[i];
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                
                i++;
                j++;
            }
        }
        
        return ans;
        
    }
};