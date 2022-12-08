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
    //function to store all leaf node in a vector (left valuesubsequence)
    void inorder(TreeNode* root,vector<int>&store) 
    {
        if(!root)
            return;
        inorder(root->left,store);
        
        if(!root->left && !root->right)
            store.push_back(root->val);
        
        inorder(root->right,store);
        
    }
    ///////////
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int>leaf1,leaf2;
        inorder(root1,leaf1);
        inorder(root2,leaf2);
        
        return leaf1==leaf2;
    }
};