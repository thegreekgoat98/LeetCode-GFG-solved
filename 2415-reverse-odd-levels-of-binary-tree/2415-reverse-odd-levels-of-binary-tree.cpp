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
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        if(!root)
            return root;
        bool flag=false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            vector<TreeNode*>temp;
            for(int i=0;i<sz;++i)
            {
                auto node=q.front();
                q.pop();
                
                if(flag)
                    temp.emplace_back(node);
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            if(flag)
                for(int i=0;i<sz/2;++i)
                    swap(temp[i]->val,temp[sz-1-i]->val);
            flag=!flag;
        }
        
        return root;
    }
};