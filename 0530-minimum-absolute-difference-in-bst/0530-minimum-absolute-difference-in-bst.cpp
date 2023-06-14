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
    int ans=INT_MAX;
    
    void dfs(TreeNode*root,int val)
    {
        if(!root)
            return;
        dfs(root->left,val);
        if(abs(val-root->val)!=0)
            ans=min(ans,abs(val-root->val));
        dfs(root->right,val);
    }
    
    void treeTraverse(TreeNode* root)
    {
        if(!root)
            return;
        
        treeTraverse(root->left);
        dfs(root,root->val);
        treeTraverse(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) 
    {
        treeTraverse(root);
        
        return ans;
    }
};