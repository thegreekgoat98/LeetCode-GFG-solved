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
    bool solve(TreeNode* root,int &n)
    {
        if(!root)
            return true;
        if(root->val!=n)
            return false;
        return solve(root->left,n) && solve(root->right,n);
    }
    ///////////
    bool isUnivalTree(TreeNode* root) 
    {
        int rootVal=root->val;
        return solve(root,rootVal);
    }
};