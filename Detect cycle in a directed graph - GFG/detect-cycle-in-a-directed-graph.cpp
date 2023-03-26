//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  
    bool checkCycle(int node,vector<int>adj[],vector<bool>&vis,vector<bool>&dfsVis)
    {
        vis[node]=true;
        dfsVis[node]=true;
        
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(checkCycle(it,adj,vis,dfsVis))
                    return true;
            }
                
            else if(dfsVis[it])
                return true;
        }
        dfsVis[node]=false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<bool>vis(V,false);
        vector<bool>dfsVis(V,false);
        for(int i=0;i<V;++i)
        {
            if(!vis[i])
            {
                if(checkCycle(i,adj,vis,dfsVis))
                    return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends