class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid)
    {
        //base case
        if(i==grid.size())
            return j;
        
        //left to right
        if(grid[i][j]==1 && j+1<grid[0].size() && grid[i][j+1]==1)
            return dfs(i+1,j+1,grid);
        //right to left
        else if(grid[i][j]==-1 && j-1>=0 && grid[i][j-1]==-1)
            return dfs(i+1,j-1,grid);
        // else if(grid[i][j]==1 && j+1>=grid[0].size())
        //     return -1;
        else
            return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m);
        for(int i=0;i<m;++i)
            ans[i]=dfs(0,i,grid);
        
        return ans;
    }
};