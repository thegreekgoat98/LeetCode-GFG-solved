class Solution {
public:
    
    int dx[8]={1,0,1,0,-1,-1,1,-1};
    int dy[8]={1,1,0,-1,0,-1,-1,1};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        if(grid[0][0] || grid[n-1][n-1])
            return -1;
        
        int ans=1;
        
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int x=temp.first;
            int y=temp.second;
            
            if(x==n-1 && y==n-1)
                return grid[x][y];
            
            for(int k=0;k<8;++k)
            {
                int nx=x+dx[k];
                int ny=y+dy[k];
                
                if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==0)
                {
                    q.push({nx,ny});
                    grid[nx][ny]=grid[x][y]+1;
                }
            }
        }
        
        return -1;
        
    }
};