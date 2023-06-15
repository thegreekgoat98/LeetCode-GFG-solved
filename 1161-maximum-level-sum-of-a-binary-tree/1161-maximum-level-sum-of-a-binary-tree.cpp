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
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        int maxSum=INT_MIN;
        int level=0;
        
        while(!q.empty())
        {
            level++;
            int sz=q.size();
            int currSum=0;
            while(sz--)
            {
                TreeNode*node=q.front();
                q.pop();
                
                currSum+=node->val;
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                
            }
            
            if(currSum>maxSum)
            {
                maxSum=currSum;
                ans=level;
            }
            
        }
        
        return ans;
        
    }
};