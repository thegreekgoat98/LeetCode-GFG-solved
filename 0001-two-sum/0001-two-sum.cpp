class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>ans(2);
        unordered_map<int,int>mp; //{element,index}
        for(int i=0;i<nums.size();++i)
        {
            auto x=mp.find(target-nums[i]);
            if(x!=mp.end())
            {
                ans[0]=i;
                ans[1]=x->second;
                return ans;
            }
            else
                mp[nums[i]]=i;   
        }
        return ans;
    }
};