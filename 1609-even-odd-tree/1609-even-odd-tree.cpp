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
    bool isEvenOddTree(TreeNode* root) 
    {
        int level=-1;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            level++;
            vector<int>temp;
            int noOfnodes=q.size();
            while(noOfnodes--)
            {
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            
            if(level%2==0)
            {
                for(auto&it:temp)
                    if(it%2==0)
                        return false;
                for(int i=0;i<temp.size()-1;++i)
                    if(temp[i]>=temp[i+1])
                        return false;
            }
            else if(level%2)
            {
                for(auto&it:temp)
                    if(it%2)
                        return false;
                for(int i=0;i<temp.size()-1;++i)
                    if(temp[i]<=temp[i+1])
                        return false;
            }
            
        }
        return true;
    }
};