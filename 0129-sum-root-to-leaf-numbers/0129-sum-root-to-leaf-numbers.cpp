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
class Solution 
{
public:
    int ans=0;
    void dfs(TreeNode* node,int val)
    {
        if(node==NULL)
            return;
        val=val*10+node->val;
        if(node->left==NULL && node->right==NULL)
        {
            ans=ans+val;
            return;
        }
        dfs(node->left,val);
        dfs(node->right,val);
    }
    //////////
    int sumNumbers(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        dfs(root,0); //0=val
        return ans;
    }
};