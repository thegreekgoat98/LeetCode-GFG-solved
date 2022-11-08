class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        vector<int>ans;
        for(auto it:m)
            if(it.second==1)
                ans.push_back(it.first);
        return ans;
    }
};