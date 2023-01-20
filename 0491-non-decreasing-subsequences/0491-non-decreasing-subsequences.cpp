class Solution {
public:
    
    
    void dfs(int ind, int prev,vector<int>&nums,vector<int>&temp,set<vector<int>>&st)
    {
        if(ind==nums.size())
            return;
        if(temp.size()>=2)
            st.insert(temp);
        
        for(int i=ind+1;i<nums.size();++i)
        {
            if(nums[i]>=prev)
            {
                temp.push_back(nums[i]);
                dfs(i,nums[i],nums,temp,st);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;++i)
        {
            vector<int>temp;
            temp.push_back(nums[i]);
            dfs(i,nums[i],nums,temp,st);
        }
        
        return vector<vector<int>>(st.begin(),st.end());
        
    }
};