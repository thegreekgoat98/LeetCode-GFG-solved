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
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root-> left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
    //////////
    bool findTarget(TreeNode* root, int k) 
    {
        inorder(root);
        ////
        int n=nodes.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(nodes[i]+nodes[j]==k)
                return true;
            else if(nodes[i]+nodes[j]>k)
                j--;
            else    
                i++;
        }
        return false;
    }
};