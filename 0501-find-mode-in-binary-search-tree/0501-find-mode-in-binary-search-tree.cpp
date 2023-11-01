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
    map<int,int>m;
    void inorder(TreeNode* node)
    {
        if(!node)
            return;
        inorder(node->left);
        m[node->val]++;
        inorder(node->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        vector<int>ans;
        inorder(root);
        int maxi=INT_MIN;
        
        for(auto it:m)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
            }
                
        }
        for(auto it:m)
        {
            if(it.second==maxi)
                ans.push_back(it.first);
        }
        return ans;
    }
};