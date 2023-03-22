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
    TreeNode* createBinaryTree(vector<vector<int>>& des) 
    {
        unordered_map<int,TreeNode*>mp;
        unordered_map<int,int>parent,child;
        
        for(int i=0;i<des.size();++i)
        {
            int par=des[i][0];
            int c=des[i][1];
            int isLeft=des[i][2];
            
            if(mp.find(par)==mp.end())
            {
                TreeNode* newNode=new TreeNode(par);
                mp[par]=newNode;
            }
            if(mp.find(c)==mp.end())
            {
                TreeNode* newNode=new TreeNode(c);
                mp[c]=newNode;
            }
            
            if(isLeft)
                mp[par]->left=mp[c];
            else
                mp[par]->right=mp[c];
            
            parent[par]++;
            child[c]++;
        }
        
        for(auto it:mp)
            if(parent.find(it.first)!=parent.end() && child.find(it.first)==child.end())
                return it.second;
        
        return NULL;
    }
    ///https://www.youtube.com/watch?v=d6rS24blgqQ-- VERY SMOOTH EXPLANATION
};