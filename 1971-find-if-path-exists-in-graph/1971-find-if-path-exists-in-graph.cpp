class Solution {
public:
    void dfs(int node,vector<bool>&vis,vector<int>adj[])
    {
        vis[node]=true;
        
        for(auto&it:adj[node])
            if(!vis[it])
                dfs(it,vis,adj);
    }
    //////////////
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<int>adj[n];
        for(int i=0;i<edges.size();++i)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(n,false);
        dfs(source,vis,adj);
        
        return vis[destination];
    }
};