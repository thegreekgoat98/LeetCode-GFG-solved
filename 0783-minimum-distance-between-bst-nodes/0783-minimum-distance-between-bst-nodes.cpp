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
    vector<int>nodes;
    void findNodes(TreeNode* node)  //inorder
    {
        if(!node)
            return;
        
        findNodes(node->left);
        nodes.push_back(node->val);
        findNodes(node->right);
    }
    /////
    int minDiffInBST(TreeNode* root) 
    {
        findNodes(root);
        int ans=INT_MAX;
        for(int i=1;i<nodes.size();i++)
            ans=min(ans,nodes[i]-nodes[i-1]);
        return ans;
    }
};