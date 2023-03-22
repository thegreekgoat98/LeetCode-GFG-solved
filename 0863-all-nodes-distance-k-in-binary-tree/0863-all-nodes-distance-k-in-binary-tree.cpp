/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int,vector<int>>adj;
    void makeGraph(TreeNode* root)
    {
        queue<pair<TreeNode*,int>>q;
        q.push({root,-1});
        
        while(!q.empty())
        {
            auto [node,par]=q.front();
            q.pop();
            
            if(par!=-1)
            {
                adj[node->val].push_back(par);
                adj[par].push_back(node->val);
            }
            
            if(node->left)
                q.push({node->left,node->val});
            if(node->right)
                q.push({node->right,node->val});
        }
    }
    ////////////////////////////////////////////////
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        /*1. Convert the given tree to a graph
        2. BFS*/
        
        makeGraph(root);
        
        queue<int>q;
        unordered_map<int,bool>vis;
        q.push(target->val);
        vis[target->val]=true;
        k++;
        bool flag=true;
        vector<int>ans;
        
        while(!q.empty())
        {
            int sz=q.size();
            k--;
            while(sz--)
            {
                int node=q.front();
                q.pop();
            
                if(k==0)
                {
                    ans.push_back(node);
                    flag=false;
                }
                    
                
                for(auto it:adj[node])
                {
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it]=true;
                    }
                }
                    
            }
            if(!flag)
                break;
        }
        
        return ans;
    }
};