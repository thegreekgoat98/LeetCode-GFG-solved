class Solution {
public:
    int ans=0;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    /////////////////////////////////////////////////////
    bool isValid(int i,int j,vector<vector<int>> &grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]!=0)
            return true;
        return false;
    }
    /////////////////////////////////////////////////////
    void dfs(int i,int j,vector<vector<int>> &grid,int curr)
    {
        ans=max(ans,curr);
        int a=grid[i][j];
        grid[i][j]=0;
        
        for(int k=0;k<4;++k)
        {
            int ni=dx[k]+i;
            int nj=dy[k]+j;
            
            if(isValid(ni,nj,grid))
                dfs(ni,nj,grid,curr+grid[ni][nj]);
        }
        grid[i][j]=a;
    }
    ////////////////////////////////////////////////////////
    int getMaximumGold(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j]>0)
                {
                    dfs(i,j,grid,grid[i][j]);
                }
            }
        }
        return ans;
    }
};