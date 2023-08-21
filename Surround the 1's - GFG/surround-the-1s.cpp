//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int n,m;
    int dx[8]={0,0,-1,1,-1,1,-1,1};
    int dy[8]={1,-1,0,0,-1,-1,1,1};
    
    bool isValid(int i,int j)
    {
        return (i>=0 && i<n && j>=0 && j<m);
    }
    
    int Count(vector<vector<int> >& mat) 
    {
        n=mat.size();
        m=mat[0].size();
        int cnt=0;
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(mat[i][j]==1)
                {
                    int z=0;
                    for(int k=0;k<8;++k)
                    {
                        int ni=dx[k]+i;
                        int nj=dy[k]+j;
                        
                        if(isValid(ni,nj))
                            if(mat[ni][nj]==0)
                                z++;
                    }
                    if(z>0 && z%2==0)
                        cnt++;
                }
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends