class Solution {
public:
    int ans=0;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    ///////////////////
    bool isValid(int i,int j,vector<vector<int>> grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]!=-1)
            return true;
        return false;
    }
    //////////////////
    void dfs(int i,int j,int cnt,vector<vector<int>> grid)
    {
        if(grid[i][j]==2 && cnt==0)
        {
            ans++;
            return;
        }
        grid[i][j]=-1;  
        for(int k=0;k<4;++k)
        {
            int ni=dx[k]+i;
            int nj=dy[k]+j;
            if(isValid(ni,nj,grid))
                dfs(ni,nj,cnt-1,grid);
        }
    }
    
    
    
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int x=0,y=0,cnt0=0;
        for(int i=0;i<grid.size();++i)
        {
            for(int j=0;j<grid[0].size();++j)
            {
                if(grid[i][j]==1)
                {
                    x=i;
                    y=j;
                }
                else if(grid[i][j]==0)
                    cnt0++;
            }
        }
        dfs(x,y,cnt0+1,grid);
        
        return ans;
    }
};