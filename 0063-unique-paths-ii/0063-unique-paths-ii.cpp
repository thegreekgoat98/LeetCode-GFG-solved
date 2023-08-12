class Solution {
public:
    //memoized
    
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
        
        int right=solve(i,j+1,grid);
        int down=solve(i+1,j,grid);
        
        dp[i][j]=right+down;
        return dp[i][j];
    }
    ///////////////
    int uniquePathsWithObstacles(vector<vector<int>>& grid)
    {
        n=grid.size();
        m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        
        return solve(0,0,grid);
    }
};
// https://www.youtube.com/watch?v=JC1fSPdJjMc -- CODESTORYWITHMIK-- made it so simple