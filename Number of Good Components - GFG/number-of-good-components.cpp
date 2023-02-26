//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<bool>vis;
    
    void dfs(int node,vector<vector<int>>& adj,int& vertex,int& edge)
    {
        vis[node]=true;
        vertex++;
        
        for(auto it:adj[node])
        {
            edge++;
            
            if(!vis[it])
                dfs(it,adj,vertex,edge);
        }
    }
    
    //IDEA: FOR A COMPNENT TO BE A GOOD COMPONENT---> it should have edges=nodes*(nodes-1)/2 
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) 
    {
        vis=vector<bool>(V+1,false);
        int cnt=0;
        for(int i=1;i<=V;++i)
        {
            if(!vis[i])
            {
                int vertex=0;
                int edges=0;
                
                dfs(i,adj,vertex,edges);
                edges/=2;
                vertex=(vertex*(vertex-1))/2;
                if(edges==vertex)
                    cnt++;
            }
        }
        
        return cnt;
    }
    
    //https://www.youtube.com/watch?v=mfW34-UjH0A --> VERY GOOD EXPLANATION
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends