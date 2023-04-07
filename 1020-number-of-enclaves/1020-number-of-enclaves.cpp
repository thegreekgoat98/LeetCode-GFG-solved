class Solution {
public:
    int sea=0;
    int land=1;
    int n,m;
    
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    
    bool isValid(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==land)
            return true;
        return false;
    }
    ////////////////////////////////////////////////
    void dfs(int i,int j,vector<vector<int>>& grid)
    {
        grid[i][j]=sea;
        
        for(int k=0;k<4;++k)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            if(isValid(ni,nj,grid))
                dfs(ni,nj,grid);
        } 
    }
    ////////////////////////////////////////////////
    int numEnclaves(vector<vector<int>>& grid) 
    {
        n=grid.size();
        m=grid[0].size();
        
        for(int i=0;i<m;++i)
            if(grid[0][i]==land)
                dfs(0,i,grid);
        for(int i=0;i<m;++i)
            if(grid[n-1][i]==land)
                dfs(n-1,i,grid);
        ///////////////////////////
        for(int i=0;i<n;++i)
            if(grid[i][0]==land)
                dfs(i,0,grid);
        for(int i=0;i<n;++i)
            if(grid[i][m-1]==land)
                dfs(i,m-1,grid);
        //////////////////////////
        //////////////////////////
        int cnt=0;
        for(int i=1;i<n-1;++i)
            for(int j=1;j<m-1;++j)
                if(grid[i][j]==land)
                    cnt++;
        
        return cnt;
    }
};


/*
BOUNDRY DFS

1. Traverse throught he 4 boundaries, whenever you see a water cell, dfs through it and convert every land to sea.

2. Now, traverse through the grid and count number of land cells

*/