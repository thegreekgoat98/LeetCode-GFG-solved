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
    long mod=1000000007;
    long ans=LLONG_MIN,totalsum=0;
    
    int find(TreeNode* root)
    {
        if(!root)
            return 0;
        long sum=root->val+find(root->left)+find(root->right);
        ans=max(ans,(totalsum-sum)*sum);
        return sum;
    }
    
    int maxProduct(TreeNode* root) 
    {
        totalsum=find(root);
        find(root);
        ans%=mod;
        return ans;
    }
};