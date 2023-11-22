class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
    {
        unordered_map<int,vector<int>>mp;
        
        int maxKey=0;
        for(int i=0;i<nums.size();++i)
        {
            for(int j=0;j<nums[i].size();++j)
            {
                mp[i+j].push_back(nums[i][j]);
                maxKey=max(maxKey,i+j);
            }
        }
        
        vector<int>ans;
        for(int i=0;i<=maxKey;++i)
        {
            for(auto x=mp[i].rbegin();x!=mp[i].rend();x++)
                ans.push_back(*x);
        }
        
        return ans;
    }
};

// https://leetcode.com/problems/diagonal-traverse-ii/discuss/597741/Clean-Simple-Easiest-Explanation-with-a-picture-and-code-with-comments