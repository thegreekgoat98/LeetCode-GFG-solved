/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int>mp; //{sum,count}
    int maxFreq=INT_MIN;
    
    int dfs(TreeNode* root)
    {
        if(!root)
            return 0;
        int sum=root->val+dfs(root->left)+dfs(root->right);
        mp[sum]++;
        
        maxFreq=max(maxFreq,mp[sum]);
        
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) 
    {
        dfs(root);
        vector<int>ans;
        
        for(auto it:mp)
            if(it.second==maxFreq)
                ans.push_back(it.first);
        
        return ans;
    }
};