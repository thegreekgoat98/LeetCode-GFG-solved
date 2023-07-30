class Solution {
public: //Variable size Sliding window
    int countCompleteSubarrays(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int>mp; 
        int disElements=0; 
        int cnt=0; 

    
        for(int num:nums)
        {
            if(mp[num]==0)
                disElements++;
            mp[num]++;
        }
        
        mp.clear();

        int i=0;
        int j=0;

        while(j<n) 
        { 
            mp[nums[j]]++;
            
            while(mp.size()==disElements)
            {
                cnt+=(n-j);
                
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                
                i++;
            }
            
            j++;
        }

        return cnt;
    }

    
};