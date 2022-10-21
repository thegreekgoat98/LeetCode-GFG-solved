class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp; //{num,ind}
        for(int i=0;i<nums.size();++i)
        {
            auto x=mp.find(nums[i]);
            if(x==mp.end()) //map mai nahi hai
                mp[nums[i]]=i;
            else
            {
                if(abs(x->second-i)<=k)
                    return true;
                else
                    mp[nums[i]]=i;
            }
        }
        return false;
    }
};