//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool formingCycle(int node,vector<int>adj[],vector<bool>&vis,vector<bool>&dfsvis)
    {
        vis[node]=true;
        dfsvis[node]=true;
        
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(formingCycle(it,adj,vis,dfsvis))
                    return true;
            }
            else if(dfsvis[it])
                return true;
        }
        dfsvis[node]=false;
        return false;
    }
  /////////////////////////////////////////////////////////
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) 
    {
        vector<bool>vis(V,false),dfsvis(V,false);
        vector<int>ans;
        for(int i=0;i<V;++i)
        {
            if(!formingCycle(i,adj,vis,dfsvis))
                ans.push_back(i);
        }
        
        return ans;
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
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends