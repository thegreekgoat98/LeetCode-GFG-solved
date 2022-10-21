class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int>st;
        for(int i=0;i<nums.size();++i)
        {
            auto x=st.find(nums[i]);
            if(x==st.end())
                st.insert(nums[i]);
            else
                return true;
        }
        return false;
    }
};