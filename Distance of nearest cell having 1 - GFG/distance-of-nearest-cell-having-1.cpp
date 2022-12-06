//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    
    
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<bool>>vis(n,vector<bool>(m,false));
	    vector<vector<int>>dis(n,vector<int>(m,0));
	    
	    queue<pair<pair<int,int>,int>>q;
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<m;++j)
	        {
	            if(grid[i][j]==1)
	            {
	                q.push({{i,j},0});
	                vis[i][j]=true;
	            }
	        }
	    }
	    ///////////////////////
	    while(!q.empty())
	    {
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int steps=q.front().second;
	        q.pop();
	        dis[r][c]=steps;
	        
	        for(int i=0;i<4;++i)
	        {
	            int nr=r+dx[i];
	            int nc=c+dy[i];
	            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc])
	            {
	                vis[nr][nc]=true;
	                q.push({{nr,nc},steps+1});
	            }
	        }
	    }
	    
	    return dis;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends