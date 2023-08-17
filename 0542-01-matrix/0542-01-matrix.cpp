class Solution {
public:
    int n,m;
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    /////////////////////////////////////////////////////////
    bool isValid(int i,int j)
    {
        return (i>=0 && i<n && j>=0 && j<m);
    }
    //////////////////////////////////////////////////////////
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        n=mat.size();
        m=mat[0].size();
        
        vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(mat[i][j]==0)
                    q.push({i,j}),ans[i][j]=0;
        
        while(!q.empty())
        {
            int currx=q.front().first;
            int curry=q.front().second;
            q.pop();
            
            for(int i=0;i<4;++i)
            {
                int newx=currx+dx[i];
                int newy=curry+dy[i];
                
                if(isValid(newx,newy) && ans[newx][newy]==-1)
                {
                    q.push({newx,newy});
                    ans[newx][newy]=ans[currx][curry]+1;
                }
            }
        }
        
        return ans;
        
    }
};