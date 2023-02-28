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
    vector<TreeNode*>res;
    unordered_map<string,int>mp;
    
    string getSubTreeString(TreeNode* root)
    {
        if(!root)
            return "N";
        string str=to_string(root->val) + "," + getSubTreeString(root->left) + "," + getSubTreeString(root->right);
        
        if(mp[str]==1)
            res.push_back(root);
        mp[str]++;
        
        return str;
    }
    ///////////////////////////////////////////////////////////
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {
        getSubTreeString(root);
        
        return res;
    }
};

//https://www.youtube.com/watch?v=m0dG99f5ct4 -- legend codestorywithMIK