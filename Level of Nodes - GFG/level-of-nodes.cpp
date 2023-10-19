//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    queue<int>q;
	    q.push(0);
	    vector<bool>vis(V,false);
	    vis[0]=true;
	    int currLevel=0;
	    
	    while(!q.empty())
	    {
	        int sz=q.size();
	        while(sz--)
	        {
	            int node=q.front();
	            q.pop();
	            
	            if(node==X)
	                return currLevel;
	            
	            for(auto it:adj[node])
	            {
	                if(!vis[it])
	                {
	                    q.push(it);
	                    vis[it]=true;
	                }
	            }
	        }
	        currLevel++;
	    }
	    
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends