//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
    bool isValid(int i,int j,vector<vector<char>>&grid,vector<vector<bool>>&vis)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && !vis[i][j])
            return true;
        return false;
    }
    
    int shortestXYDist(vector<vector<char>> grid, int N, int M) 
    {
        queue<pair<pair<int,int>,int>>q; //{{x,y},dist}
        vector<vector<bool>>vis(N,vector<bool>(M,false));
        for(int i=0;i<N;++i)
        {
            for(int j=0;j<M;++j)
            {
                if(grid[i][j]=='X')
                {
                    q.push({{i,j},0});
                    vis[i][j]=true;
                }
            }
        }
        
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            
            int i=temp.first.first;
            int j=temp.first.second;
            int dis=temp.second;
            
            if(grid[i][j]=='Y')
                return dis;
            
            for(int k=0;k<4;++k)
            {
                int ni=dx[k]+i;
                int nj=dy[k]+j;
                
                if(isValid(ni,nj,grid,vis))
                {
                    vis[ni][nj]=true;
                    q.push({{ni,nj},dis+1});
                }
            }
            
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends