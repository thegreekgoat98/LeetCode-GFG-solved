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
    vector<vector<int>>ans;
    void dfs(vector<int>&curr,TreeNode* root,int target)
    {
        if(!root)
            return;
        curr.push_back(root->val);
        if(root->val==target && !root->left && !root->right)
            ans.push_back(curr);
        dfs(curr,root->left,target-root->val);
        dfs(curr,root->right,target-root->val);
        curr.pop_back();
    }
    ///////
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<int>curr;
        dfs(curr,root,targetSum);
        
        return ans;
    }
};