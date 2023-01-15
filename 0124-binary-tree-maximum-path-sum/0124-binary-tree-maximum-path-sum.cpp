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
    int maxSum=INT_MIN;
    
    int solve(TreeNode* root)
    {
        if(!root)
            return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        
        int koi_ek_acha_hai  = max(l,r) + root->val;
        int only_root_acha_hai = root->val;
        int neeche_mil_gaya_answer = l + r + root->val;
        
        maxSum = max({maxSum,koi_ek_acha_hai ,only_root_acha_hai ,neeche_mil_gaya_answer});
        
        return max(koi_ek_acha_hai,only_root_acha_hai);
    }
    ////////////////////////////////////////////
    int maxPathSum(TreeNode* root) 
    {
        solve(root);
        return maxSum;
        
    }
};
//https://www.youtube.com/watch?v=Op6YFcs8R9M