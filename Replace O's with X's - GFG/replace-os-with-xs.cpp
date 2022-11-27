//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    /////////////////////
    bool isValid(int i,int j,vector<vector<char>> &mat)
    {
        if(i>=0 && i<mat.size() && j>=0 && j<mat[0].size() && mat[i][j]=='O')
            return true;
        return false;
    }
    /////////////////////
    void dfs(int i,int j,vector<vector<char>>&mat)
    {
        mat[i][j]='#';
        
        for(int k=0;k<4;++k)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            if(isValid(ni,nj,mat))
                dfs(ni,nj,mat);
        }
    }
    ///////////////////////
    void convert(vector<vector<char>>&mat)
    {
        for(int i=0;i<mat.size();++i)
        {
            for(int j=0;j<mat[0].size();++j)
            {
                if(mat[i][j]=='#')
                    mat[i][j]='O';
                else if(mat[i][j]=='O')
                    mat[i][j]='X';
            }
        }
    }
    ///////////////////////
    vector<vector<char>> fill(int n, int m, vector<vector<char>> &mat)
    {
        for(int i=0;i<n;++i)
        {
            int j=0;
            if(mat[i][j]=='O')
                dfs(i,j,mat);
            j=m-1;
            if(mat[i][j]=='O')
                dfs(i,j,mat);
        }
        
        for(int j=0;j<m;++j)
        {
            int i=0;
            if(mat[i][j]=='O')
                dfs(i,j,mat);
            i=n-1;
            if(mat[i][j]=='O')
                dfs(i,j,mat);
        }
        convert(mat);
        
        
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends