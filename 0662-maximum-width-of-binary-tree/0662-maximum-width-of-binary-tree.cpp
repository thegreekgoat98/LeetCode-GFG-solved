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
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) 
    {
        ll ans=0;
        deque<pair<TreeNode*,ll>>dq;  //{node,index}
        dq.push_back({root,0});
        
        while(!dq.empty())
        {
            int sz=dq.size();
            ll l=dq.front().second;
            ll r=dq.back().second;
            ans=max(ans,r-l+1);
            while(sz--)
            {
                TreeNode* node=dq.front().first;
                ll ind=dq.front().second;
                
                dq.pop_front();
                if(node->left)
                    dq.push_back({node->left,2*ind+1});
                if(node->right)
                    dq.push_back({node->right,2*ind+2});
            }
        }
        
        return ans;
    }
};