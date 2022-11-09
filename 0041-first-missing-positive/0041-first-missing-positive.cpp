class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();++i)
            mp[nums[i]]++;
        
        for(int i=1;i<=1e5;++i)
            if(mp[i]==0)
                return i;
        return nums.size()+1;
    }
};