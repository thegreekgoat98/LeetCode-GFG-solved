class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<bool>&vis,long long&visCnt,long long&cnt)
    {
        vis[node]=true;
        visCnt++;
        cnt++;
        
        for(auto&it:adj[node])
            if(!vis[it])
                dfs(it,adj,vis,visCnt,cnt);
        
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) 
    {
        vector<int>adj[n];
        for(auto&it:edges)
        {
            int u=it[0];
            int v=it[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>vis(n,false);
        long long visCnt=0; //it stores the number of visited nodes till now
        long long ans=0;
        
        for(int i=0;i<n;++i)
        {
            if(!vis[i])
            {
                long long cnt=0; //it stores the number of nodes in the current component
                dfs(i,adj,vis,visCnt,cnt); 
                ans+=cnt*(n-visCnt); /*figured this formula by myself, whooooooo hooooo*/
            }
                
        }
        
        return ans;
    }
};