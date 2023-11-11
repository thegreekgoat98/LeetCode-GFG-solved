class Solution {
public:
    vector<int>ans;
    ///////////
    void dfs(int node,unordered_map<int,vector<int>>&adj,unordered_set<int>&vis)
    {
        vis.insert(node);
        ans.push_back(node);
        for(auto&it:adj[node])
        {
            if(!vis.count(it))
                dfs(it,adj,vis);
        }
    }
    ////////////
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) 
    {
        unordered_map<int,vector<int>>mp;
        
        for(auto&it:adjacentPairs)
        {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        //////////////////////////
        int start;
        for(auto&it:mp)
            if(mp[it.first].size()==1)
            {
                start=it.first;
                break;
            }
        /////////////////////////////
        unordered_set<int>vis;
        dfs(start,mp,vis);
        
        return ans;
        
    }
};