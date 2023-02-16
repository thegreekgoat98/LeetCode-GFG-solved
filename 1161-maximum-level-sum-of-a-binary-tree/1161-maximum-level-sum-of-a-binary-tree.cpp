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
    int maxLevelSum(TreeNode* root) 
    {
        int ans=0;
        int maxSum=INT_MIN;
        int currLevel=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            currLevel++;
            int nodesInLevel=q.size();
            int curr=0;
            for(int i=0;i<nodesInLevel;++i)
            {
                TreeNode* node=q.front();
                q.pop();
                curr+=node->val;
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            if(curr>maxSum)
            {
                ans=currLevel;
                maxSum=curr;
            }
        }
        return ans;
    }
};