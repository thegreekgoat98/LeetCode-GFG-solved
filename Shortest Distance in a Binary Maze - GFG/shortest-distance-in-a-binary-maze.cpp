//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dx[4]={0,1,-1,0};
    int dy[4]={1,0,0,-1};
    int shortestPath(vector<vector<int>> &grid, pair<int, int>source,pair<int, int>destination) 
    {
        int n=grid.size();
        int m=grid[0].size();
        if(source.first==destination.first && source.second==destination.second)
            return 0;
        
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dist(n,vector<int>(m,1e9)); //to store distance
        dist[source.first][source.second]=0;
        q.push({0,{source.first,source.second}});
        
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int dis=it.first;
            int r=it.second.first;
            int c=it.second.second;
            
            for(int i=0;i<4;++i)
            {
                int nr=dx[i]+r;
                int nc=dy[i]+c;
                
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && dist[nr][nc]>dis+1)
                {
                    dist[nr][nc]=dis+1;
                    if(nr==destination.first && nc==destination.second)
                        return dis+1;
                    q.push({1+dis,{nr,nc}});
                }
            }
            
        }
                         
        return -1;
    }
    //STRIVER IS THE BEST 
    //learnt from G-36 of striver's new graph playlist
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends