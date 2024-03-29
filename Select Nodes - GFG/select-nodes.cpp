//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int cnt=0;
    bool dfs(vector<int>adj[],int node,vector<bool>&vis)
    {
        vis[node]=true;
        bool select=false;
        for(int&child:adj[node])
        {
            if(!vis[child])
            {
                bool isChildSelected=dfs(adj,child,vis);
                if(!isChildSelected)
                    select=true;
            }
        }
        if(select)
            cnt++;
        
        return select;
    }
    //////////////
    int countVertex(int N, vector<vector<int>>edges)
    {
        vector<int>adj[N+1];
        for(vector<int>&temp:edges)
        {
            adj[temp[0]].push_back(temp[1]);
            adj[temp[1]].push_back(temp[0]);
        }
        vector<bool>vis(N+1,false);
        dfs(adj,1,vis);
        
        return cnt;
    }
  
  //https://www.youtube.com/watch?v=Re_yBq5ZTAA --> saw the logic
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
