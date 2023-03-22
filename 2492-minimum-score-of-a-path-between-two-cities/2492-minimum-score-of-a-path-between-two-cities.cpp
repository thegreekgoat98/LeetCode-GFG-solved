class Solution {
public:
    int ans=INT_MAX;
    
    void dfs(int node,vector<pair<int,int>>adj[],vector<bool>&vis)
    {
        vis[node]=true;
        
        for(auto&it:adj[node])
        {
            int a=it.first;
            int wt=it.second;
            
            ans=min(ans,wt);
            
            if(!vis[a])
                dfs(a,adj,vis);
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) 
    {
        vector<pair<int,int>>adj[n+1];
        vector<bool>vis(n+1,false);
        
        for(auto&it:roads)
        {
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        dfs(1,adj,vis);
        
        return ans;
    }
};