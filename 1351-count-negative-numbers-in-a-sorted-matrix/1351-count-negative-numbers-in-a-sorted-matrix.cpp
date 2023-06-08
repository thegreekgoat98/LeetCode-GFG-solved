class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        int cnt=0;
        for(int i=n-1;i>=0;--i)
        {
            for(int j=m-1;j>=0;--j)
            {
                if(grid[i][j]<0)
                    cnt++;
                else
                    continue;
            }
            continue;
        }
        return cnt;
    }
};