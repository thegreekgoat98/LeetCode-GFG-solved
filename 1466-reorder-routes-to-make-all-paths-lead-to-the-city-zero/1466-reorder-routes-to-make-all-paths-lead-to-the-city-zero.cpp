class Solution {
public:
    int cnt=0;
    
    void dfs(int node,vector<pair<int,int>>adj[],vector<bool>&vis)
    {
        vis[node]=true;
        
        for(auto&it:adj[node])
        {
            
            int u=it.first;
            int dir=it.second;
            
            if(!vis[u])
            {
                if(dir==1)
                cnt++;
                dfs(u,adj,vis);
            }
        }
    }
    ///////////////////////////////////////////////////////////
    int minReorder(int n, vector<vector<int>>& connections) 
    {
        vector<pair<int,int>>adj[n];
        
        for(auto&it:connections)
        {
            int u=it[0];
            int v=it[1];
            
            adj[u].push_back({v,1});
            adj[v].push_back({u,0});
        }
        vector<bool>vis(n,false);
        dfs(0,adj,vis);
        
        return cnt;
    }
    
    //https://www.youtube.com/watch?v=42Z0eaopoZ8 -- saw first 10 minutes and able to code the whole problem myself
};