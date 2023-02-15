//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
    bool isValid(int i,int j,vector<vector<int>>&mat)
    {
        if(i>=0 && i<mat.size() && j>=0 && j<mat[0].size())
            return true;
        return false;
    }
    
    void dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<int>>&mat)
    {
        if(!vis[i][j])
            vis[i][j]=true;
        
        for(int k=0;k<4;++k)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            
            if(isValid(ni,nj,mat))
            {
                if(!vis[ni][nj] && mat[ni][nj]>=mat[i][j])
                    dfs(ni,nj,vis,mat);
            }
                
        }
    }
    
    int water_flow(vector<vector<int>> &mat,int n,int m)
    {
        vector<vector<bool>>Ind(n,vector<bool>(m,false));
        
        for(int i=0;i<m;++i)
            Ind[0][i]=true;
        for(int i=0;i<n;++i)
            Ind[i][0]=true;
        /////////////////////////
        for(int i=0;i<m;++i)
            dfs(0,i,Ind,mat);
        for(int i=0;i<n;++i)
            dfs(i,0,Ind,mat);
        //////////////////////////////
        //////////////////////////////
        vector<vector<bool>>Arab(n,vector<bool>(m,false));
        
        for(int i=0;i<m;++i)
            Arab[n-1][i]=true;
        for(int i=0;i<n;++i)
            Arab[i][m-1]=true;
        /////////////////////////
        for(int i=0;i<m;++i)
            dfs(n-1,i,Arab,mat);
        for(int i=0;i<n;++i)
            dfs(i,m-1,Arab,mat);
        //////////////////////////////
        //////////////////////////////
        
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(Ind[i][j] && Arab[i][j])
                    cnt++;
            }
        }
        
        return cnt;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends