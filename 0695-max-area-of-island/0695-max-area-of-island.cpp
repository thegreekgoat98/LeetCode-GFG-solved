class Solution {
public:
    int area;
    
    void dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j])
        {
            area++;
            grid[i][j]=0;
            dfs(grid,i+1,j);
            dfs(grid,i-1,j);
            dfs(grid,i,j-1);
            dfs(grid,i,j+1);
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int mxarea(0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    area=0;
                    dfs(grid,i,j);
                    mxarea=max(mxarea,area);
                }
            }
        }
        return mxarea;
    }
};