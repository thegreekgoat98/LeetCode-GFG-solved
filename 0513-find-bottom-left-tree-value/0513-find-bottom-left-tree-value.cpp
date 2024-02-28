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
    vector<vector<int>>bfs(TreeNode* root)
    {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
    int findBottomLeftValue(TreeNode* root) 
    {
        vector<vector<int>>storebfs=bfs(root);
        int n=storebfs.size();
        int m=n-1;
        int ans=storebfs[m][0];
        return ans;
    }
};

// Do a BFS of the tree,,
// in the BFS vector of vector, the last vector's first element is your ans