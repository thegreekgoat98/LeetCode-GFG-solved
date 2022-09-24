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
    int cnt=0;
    void dfs(TreeNode* root,long long target)
    {
        if(!root)
            return;
        if(root->val==target)
            cnt++;
        dfs(root->left,target-root->val);
        dfs(root->right,target-root->val);
    }
    /////////
    int pathSum(TreeNode* root, int targetSum) 
    {
        if(root)
        {
            dfs(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);
        }
        return cnt;
    }
};