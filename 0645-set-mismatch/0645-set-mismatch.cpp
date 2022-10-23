class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int>ans;
        unordered_set<int>st;
        int sum=0;
        for(auto it:nums)
        {
            auto x=st.find(it);
            if(x!=st.end())
                ans.push_back(it);
            else
            {
                sum+=it;
                st.insert(it);
            }
        }
        int n=nums.size();
        int total=n*(n+1)/2;
        ans.push_back(total-sum);
        
        return ans;
    }
};