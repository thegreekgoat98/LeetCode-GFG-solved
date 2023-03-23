class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<bool>&vis)
    {
        vis[node]=true;
        
        for(auto it:adj[node])
            if(!vis[it])
                dfs(it,adj,vis);
            
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) 
    {
        if(connections.size()<n-1) //n-1--> this much of edge is required to connect all components of a graph
            return -1;
        
        vector<int>adj[n];
        for(int i=0;i<connections.size();++i)
        {
            int u=connections[i][0];
            int v=connections[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>vis(n,false);
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis);
                cnt++;
            }
        }
        
        return cnt-1;
    }
};