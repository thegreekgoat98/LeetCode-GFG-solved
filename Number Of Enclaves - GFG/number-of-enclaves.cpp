//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int n,m;
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
  
    bool isValid(int i,int j,vector<vector<int>>&grid)
    {
        return (i>=0 && i<n && j>=0 && j<m && grid[i][j]==1);
    }
    /////////////////////////////////////////////////////
    void dfs(int i,int j,vector<vector<int>>&grid)
    {
        grid[i][j]=0;
        
        for(int k=0;k<4;++k)
        {
            int ni=dx[k]+i;
            int nj=dy[k]+j;
            
            if(isValid(ni,nj,grid))
                dfs(ni,nj,grid);
        }
    }
    //////////////////
    int numberOfEnclaves(vector<vector<int>> &grid) 
    {
        n=grid.size();
        m=grid[0].size();
        
        for(int i=0;i<m;++i)
            if(grid[0][i]==1)
                dfs(0,i,grid);
        for(int i=0;i<m;++i)
            if(grid[n-1][i]==1)
                dfs(n-1,i,grid);
                
        for(int i=0;i<n;++i)
            if(grid[i][0]==1)
                dfs(i,0,grid);
        for(int i=0;i<n;++i)
            if(grid[i][m-1]==1)
                dfs(i,m-1,grid);
        //////////////////////////////////////////////////////        
        int cnt=0;
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(grid[i][j]==1)
                    cnt++;
        
        return cnt;
        
    }
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
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends