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
    long long kthLargestLevelSum(TreeNode* root, int k) 
    {
        priority_queue<long long>pq;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            long long levelSum=0;
            while(sz--)
            {
                auto node=q.front();
                q.pop();
                levelSum+=node->val;
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            pq.push(levelSum);
        }
        
        if(pq.size()<k)
            return -1;
        
        k--;
        while(k--)
            pq.pop();
        
        return pq.top();
        
    }
};