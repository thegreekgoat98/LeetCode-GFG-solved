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
    vector<string>ans;
    void dfs(TreeNode* node,string curr)
    {
        if(node==NULL)
            return;
        
        curr=curr+to_string(node->val)+"->";
        
        if(node->left==NULL && node->right==NULL)
        {
            curr.pop_back();
            curr.pop_back();
            ans.push_back(curr);
        }
            
        dfs(node->left,curr);
        dfs(node->right,curr);
        curr.pop_back();
        
        
    }
    ////
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        if(root==NULL)
            return ans;
        string str="";
        dfs(root,str);
        return ans;
    }
};