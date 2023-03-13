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
    bool help(TreeNode* lnode,TreeNode* rnode)
    {
        if(lnode==NULL || rnode==NULL)
            return lnode==rnode;
        if(lnode->val!=rnode->val)
            return false;
        return help(lnode->left,rnode->right) && help(lnode->right,rnode->left);
    }
    ///////
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        return help(root->left,root->right);
    }
};