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
    void solve(TreeNode* root, int val)
    {
        if(root->val>val && !root->left)
        {
            root->left=new TreeNode(val);
            return;
        }
        if(root->val<val && !root->right)
        {
            root->right=new TreeNode(val);
            return;
        }
        
        if(root->val>val)
            return solve(root->left,val);
        if(root->val<val)
            return solve(root->right,val);
        
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(!root)
            return new TreeNode(val);
        solve(root,val); 
        return root;
    }
};