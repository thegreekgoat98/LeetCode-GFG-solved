class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        map<vector<int>,int>mp;
        
        int n=grid.size();
        
        for(int i=0;i<n;++i)
        {
            vector<int>temp;
            for(int j=0;j<n;++j)
            {
                temp.push_back(grid[i][j]);
            }
            mp[temp]++;
        }
        ///////////////////////////////////////////////
        int cnt=0;
        
        for(int i=0;i<n;++i)
        {
            vector<int>temp;
            for(int j=0;j<n;++j)
            {
                temp.push_back(grid[j][i]);
            }
            cnt+=mp[temp];
        }
        
        return cnt;
    }
};