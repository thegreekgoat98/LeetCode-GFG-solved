class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans;
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        for(auto it:m)
            if(it.second==1)
            {
                return it.first;
            }
        return 0;
    }
};