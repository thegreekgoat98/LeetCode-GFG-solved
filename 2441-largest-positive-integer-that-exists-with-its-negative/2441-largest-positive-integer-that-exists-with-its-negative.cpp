class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();++i)
        {
            auto x=find(nums.begin(),nums.end(),-1*nums[i]);
            if(x!=nums.end())
                return nums[i];
        }
        return -1;
        
    }
};