class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int i=0,j=0;
        unordered_map<int,int>mp;
        long long maxi=0,sum=0;
        while(j<n)
        {
            sum+=nums[j];
            mp[nums[j]]++;
            if(j-i+1<k) //if window size is not hit
                j++;
            else if(j-i+1==k) //if window size is hit
            {
                if(mp.size()==k) //if k distinct elements are found
                    maxi=max(maxi,sum);
                    
                //sliding the window
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                sum-=nums[i];
                i++;
                j++;  
            }
            
        }
        
        return maxi;
    }
};