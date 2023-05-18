//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    
    bool isValid(int i,int j,vector<vector<int>>& matrix)
    {
        if(i>=0 && i<matrix.size() && j>=0 && j<matrix[0].size() && matrix[i][j])
            return true;
        return false;
    }
    
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    void dfs(int i,int j,vector<vector<int>>& matrix)
    {
        matrix[i][j]=0;
        
        for(int k=0;k<4;++k)
        {
            int ni=dx[k]+i;
            int nj=dy[k]+j;
            
            if(isValid(ni,nj,matrix))
                dfs(ni,nj,matrix);
        }
        
    }
    
    int closedIslands(vector<vector<int>>& matrix, int N, int M) 
    {
        //traverse through the boundry, whenever you find a 1, convert it to 0 and DFS through it to make all 1s 0.
        //traverse through the matrix and count no of islands
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<m;++i)
            if(matrix[0][i])
                dfs(0,i,matrix);
        for(int i=0;i<m;++i)
            if(matrix[n-1][i])
                dfs(n-1,i,matrix);
        ////////////////////////////
        for(int i=0;i<n;++i)
            if(matrix[i][0])
                dfs(i,0,matrix);
        for(int i=0;i<n;++i)
            if(matrix[i][m-1])
                dfs(i,m-1,matrix);
        ///////////////////////////
        int cnt=0;
        for(int i=1;i<n-1;++i)
        {
            for(int j=1;j<m-1;++j)
                if(matrix[i][j])
                {
                    cnt++;
                    dfs(i,j,matrix);
                }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends