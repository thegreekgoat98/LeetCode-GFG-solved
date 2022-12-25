class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        sort(nums.begin(),nums.end());
        vector<int>pf(nums.size());
        pf[0]=nums[0];
        for(int i=1;i<nums.size();++i)
            pf[i]=pf[i-1]+nums[i];
        //////
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int res=upper_bound(pf.begin(),pf.end(),queries[i])-pf.begin();
            ans.push_back(res);
        }
        return ans;
    }
};