class Solution {
public:
    void dfs(int node,unordered_map<int,bool>&vis,vector<int>adj[],int end)
    {
        vis[node]=true;
        
        for(auto&it:adj[node])
        {
            if(it==end)
            {
                vis[end]=true;
                return;
            }
            if(!vis[it])
                dfs(it,vis,adj,end);
        }
            
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
        unordered_map<int,bool>vis;
        dfs(source,vis,adj,destination);
        
        return vis[destination];
    }
};