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
    vector<int>inorder;
    void findInorder(TreeNode* root)
    {
        if(!root)
            return;
        findInorder(root->left);
        inorder.push_back(root->val);
        findInorder(root->right);
    }
    //////////////////////////////////////
    TreeNode* buildTree(int l,int r)
    {
        if(l>r)
            return NULL;
        int mid=l+(r-l)/2;
        TreeNode* root=new TreeNode(inorder[mid]);
        
        root->left=buildTree(l,mid-1);
        root->right=buildTree(mid+1,r);
        
        return root;
    }
    /////////////////////////////////////
    TreeNode* balanceBST(TreeNode* root) 
    {
        findInorder(root);
        int n=inorder.size();
        TreeNode* node=buildTree(0,n-1);
        
        return node;
    }
};