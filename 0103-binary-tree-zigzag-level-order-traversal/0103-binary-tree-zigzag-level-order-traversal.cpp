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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        if(!root)
            return {};
        vector<vector<int>>ans;
        bool flag=false; //false-->L to R ---------true-->R to L
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>temp;
            for(int i=0;i<sz;++i)
            {
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right); 
            }
            if(!flag)
            {
                ans.push_back(temp);
                flag=true;
            }
            else
            {
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                flag=false;
            }
        }
        
        return ans;
    }
};