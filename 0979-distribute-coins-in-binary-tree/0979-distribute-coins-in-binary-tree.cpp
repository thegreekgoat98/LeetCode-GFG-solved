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
    int solve(TreeNode* node,int &moves)
    {
        if(!node)
            return 0;
        int l=solve(node->left,moves);
        int r=solve(node->right,moves);
        
        moves+=(abs(l) + abs(r));
        
        return (l+r+node->val)-1; // return karega kitne extra hai ek node ke paas
    }
    /////////////////////////////////////
    int distributeCoins(TreeNode* root) 
    {
        int moves=0;
        solve(root,moves);
        
        return moves;
    }
};

// https://www.youtube.com/watch?v=FmHxY2104hc  -- CodeStorywithMIK