class Solution {
public:
    int n,m;
    vector<vector<int>>ans;
    vector<vector<bool>>pac,atl;
    
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    
    bool isValid(int i,int j,vector<vector<int>>& mat,vector<vector<bool>>&vis,int old)
    {
        if(i>=0 && i<n && j>=0 && j<m && mat[i][j]>=old && !vis[i][j])
            return true;
        return false;
    }
    
    void dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<int>>& mat)
    {
        if(vis[i][j])
            return;
        vis[i][j]=true;
        
        if(atl[i][j] && pac[i][j])
            ans.push_back({i,j});
        
        for(int k=0;k<4;++k)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            if(isValid(ni,nj,mat,vis,mat[i][j]))
                dfs(ni,nj,vis,mat);
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& mat)
    {
        n=mat.size();
        m=mat[0].size();
        
        atl=pac=vector<vector<bool>>(n,vector<bool>(m,false)); //will act as visited array
        
        for(int i=0;i<m;++i) //from left to right
        {
            dfs(0,i,pac,mat);
            dfs(n-1,i,atl,mat);
        }
        
        for(int i=0;i<n;++i) //from top to bottom
        {
            dfs(i,0,pac,mat);
            dfs(i,m-1,atl,mat);
        }
        return ans;
    }
    
};