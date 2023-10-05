class Solution {
public:
    vector<int>ans;
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int fl=floor(n/3);
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        for(auto it:m)
            if(it.second>fl)
                ans.push_back(it.first);
        return ans;
    }
};