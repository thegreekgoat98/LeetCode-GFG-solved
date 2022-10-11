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
    string ans="";
    void solve(TreeNode* root,string curr)
    {
        if(!root)
            return;
        curr+=(char)(root->val+'a');
        if(!root->left && !root->right)
        {
            reverse(curr.begin(),curr.end());
            if(ans=="")
                ans=curr;
            else
                ans=min(ans,curr);
        }
        
        solve(root->left,curr);
        solve(root->right,curr);
        
    }
    ///////
    string smallestFromLeaf(TreeNode* root) 
    {
        solve(root,"");
        return ans;
    }
};