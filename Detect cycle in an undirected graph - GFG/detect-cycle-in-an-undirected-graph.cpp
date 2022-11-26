//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool checkforCycle(int i, vector<int> adj[], vector<bool>&vis)
    {
        queue<pair<int,int>>q;
        q.push({i,-1});
        vis[i]=true;
        
        while(!q.empty())
        {
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=true;
                    q.push({it,node});
                }
                else if(par!=it)
                    return true;
            }
        }
        return false;
    }
  
  
  
  
  
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool>vis(V,false); //only V nodes, cuz node numbering starts from 0.
        
        for(int i=0;i<V;++i) //because node numbering starts from 0.
        {
            if(!vis[i])
                if(checkforCycle(i,adj,vis))
                    return true;
        }
        return false;
    }
    
    
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends