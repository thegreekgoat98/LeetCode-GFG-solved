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
    unordered_map<int,vector<int>>adj;
    
    void createGraph(TreeNode* root)
    {
        queue<pair<TreeNode*,int>>q; //{node,parent}
        q.push({root,-1});
        
        while(!q.empty())
        {
            // auto temp=q.front();
            // auto par=temp.second;
            // auto node=temp.first;
            auto [node,par]=q.front();
            q.pop();
            
            if(par!=-1)
            {
                adj[par].push_back(node->val);
                adj[node->val].push_back(par);
            }
            
            if(node->left)
                q.push({node->left,node->val});
            if(node->right)
                q.push({node->right,node->val});
        }
        
    }
    
    
    int amountOfTime(TreeNode* root, int start) 
    {
        //create graph out of the tree
        createGraph(root);
        
        //BFS
        queue<int>q;
        int n=adj.size();
        // vector<bool>vis(n+1,false);
        unordered_map<int,bool>vis;
        q.push(start);
        vis[start]=true;
        
        int time=-1;
        
        while(!q.empty())
        {
            time++;
            auto sz=q.size();
            while(sz--)
            {
                auto node=q.front();
                q.pop();
                
                for(auto it:adj[node])
                {
                    if(!vis[it])
                    {
                        vis[it]=true;
                        q.push(it);
                    }
                }
            } 
        }
        
        return time;
            
        
    }
};
//https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/discuss/2456601/BFS-after-Creating-Graph-Full-Explanation

//1. create graph out of this tree
//2. bfs----> similar to rotten oranges