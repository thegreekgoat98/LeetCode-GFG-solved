class Solution {
public:
    /* 0-->LAND
       1-->WATER*/
    int land=0;
    int water=1;
    int n,m;
    
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    
    bool isValid(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==land)
            return true;
        return false;
    }
    
    void dfs(int i,int j,vector<vector<int>>& grid)
    {
        grid[i][j]=water;
        
        for(int k=0;k<4;++k)
        {
            int ni=dx[k]+i;
            int nj=dy[k]+j;
            
            if(isValid(ni,nj,grid))
                dfs(ni,nj,grid);
        }
        
        
    }
    ///////////////////////////////////
    int closedIsland(vector<vector<int>>& grid) 
    {
        n=grid.size();
        m=grid[0].size();
        ///////////////////////////////
        
        for(int i=0;i<m;++i)
            if(grid[0][i]==land)
                dfs(0,i,grid);
        for(int i=0;i<m;++i)
            if(grid[n-1][i]==land)
                dfs(n-1,i,grid);
        //////////////////////////////
        for(int i=0;i<n;++i)
            if(grid[i][0]==land)
                dfs(i,0,grid);
        for(int i=0;i<n;++i)
            if(grid[i][m-1]==land)
                dfs(i,m-1,grid);
        /////////////////////////////
        
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j]==land)
                {
                    cnt++;
                    dfs(i,j,grid);
                }
            }
        }
        
        return cnt;
    }
};


/*
BOUNDARY DFS

1. Traverse throught he 4 boundaries and if you find any land make    it water.
2. Now start traversing through the grid and whenever you find a      land, run dfs and increment count.
3. Return count.

*/