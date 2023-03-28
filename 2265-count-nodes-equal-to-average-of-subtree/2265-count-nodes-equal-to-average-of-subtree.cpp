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
    int cnt=0;
    void findSumandNodes(TreeNode* root,int &sum,int &n)
    {
        if(!root)
            return;
        findSumandNodes(root->left,sum,n);
        n++;
        sum+=root->val;
        findSumandNodes(root->right,sum,n);
    }
    ////////////////////////////////////
    void traverse(TreeNode* root)
    {
        if(!root)
            return;
        traverse(root->left);
        int sum=0,n=0;
        findSumandNodes(root,sum,n);
        int avg=sum/n;
        if(avg==root->val)
            cnt++;
        traverse(root->right);
    }
    //////////////////////////////////////////
    int averageOfSubtree(TreeNode* root) 
    {
        traverse(root);
        
        return cnt;
    }
};