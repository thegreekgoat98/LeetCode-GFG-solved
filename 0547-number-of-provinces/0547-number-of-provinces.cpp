class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<bool>&vis)
    {
        vis[node]=true;
        for(auto&neighbour:adj[node])
            if(!vis[neighbour])
                dfs(neighbour,adj,vis);
    }
    ///////////
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                if(isConnected[i][j])
                    adj[i].push_back(j);
        
        int cnt=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;++i)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,adj,vis);
            }
        }
        
        return cnt;
    }
};