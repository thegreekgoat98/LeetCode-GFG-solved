//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mod=1e9+7; 
    int n,m;
    int dp[101][101];
    
    int solve(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=n || j>=m || grid[i][j]==1)
            return 0;
            
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        if(i==n-1 && j==m-1)
            return 1;
            
        int right=solve(i,j+1,grid)%mod;
        int down=solve(i+1,j,grid)%mod;
        
        dp[i][j]=right+down;
        return dp[i][j]%mod;
    }
    ////////////
    int totalWays(int n, int m, vector<vector<int>>& grid)
    {
        this->n=n;
        this->m=m;
        memset(dp,-1,sizeof(dp));
        
        return solve(0,0,grid)%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends