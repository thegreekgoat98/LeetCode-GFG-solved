class Solution {
public:
    int n,m;
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    
    bool isValid(int i,int j, vector<vector<int>>&grid)
    {
        return (i>=0 && i<n && j>=0 && j<m && grid[i][j]==1);
    }
    
    void dfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&vis)
    {
        vis[i][j]=true;
        
        for(int k=0;k<4;++k)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            if(isValid(ni,nj,grid) && !vis[ni][nj])
                dfs(ni,nj,grid,vis);
        }
        
    }
    
    int findIslands(vector<vector<int>>&grid)
    {
        int islands=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j]==1 && !vis[i][j])
                {
                    dfs(i,j,grid,vis);
                    islands++;
                }
            }
        }
        return islands;
    }
    
    int minDays(vector<vector<int>>& grid) 
    {
        n=grid.size();
        m=grid[0].size();
        int numberOfIslands=findIslands(grid);
        
        if(numberOfIslands>1 || numberOfIslands==0)
            return 0;
        else
        {
            for(int i=0;i<n;++i)
            {
                for(int j=0;j<m;++j)
                {
                    if(grid[i][j]==1)
                    {
                        grid[i][j]=0;
                        numberOfIslands=findIslands(grid);
                        
                        if(numberOfIslands>1 || numberOfIslands==0)
                            return 1;
                        grid[i][j]=1;
                    }
                }
            }
        }
        
        return 2;
    }
};




/*
1. Find number of islands(noi)
2. if noi>1 or noi==0    return 0
3. while traversing through grid, try putting 0 every place where there is 1,
        and if the noi comes more than 1 or 0 because of the that, just return 1.

4. anyways return 2 (cuz anyway by 2 days we can diconnect any given island)
*/