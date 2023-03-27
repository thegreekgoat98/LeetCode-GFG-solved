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
    int minSwaps(vector<int>&arr)
    {
        int cnt=0;
        int n=arr.size();
        vector<pair<int,int>>pos(n);
        for(int i=0;i<arr.size();++i)
        {
            pos[i].first=arr[i];
            pos[i].second=i;
        }
        sort(begin(pos),end(pos));
        
        for(int i=0;i<n;++i)
        {
            if(i==pos[i].second)
                continue;
            
            while(i!=pos[i].second)
            {
                cnt++;
                swap(pos[i],pos[pos[i].second]);
            }
        }
        
        return cnt;
    }
    
    int minimumOperations(TreeNode* root) 
    {
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>level;
            while(sz--)
            {
                auto node=q.front();
                q.pop();
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                level.push_back(node->val);
            }
            ans+=minSwaps(level);
        }
        
        return ans;
    }
    
    // https://www.youtube.com/watch?v=TbO2c4BCVlo
};