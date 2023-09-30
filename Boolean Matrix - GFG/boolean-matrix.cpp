//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    int n,m;
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &mat)
    {
        n=mat.size();
        m=mat[0].size();
         queue<pair<int,int>>q;
         for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(mat[i][j]==1)
                    q.push({i,j});
        ///////////////////////////////////////////
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            
            int a=temp.first;
            int b=temp.second;
            
            for(int i=0;i<m;++i) //   ->
                mat[a][i]=1;
                
            for(int i=0;i<n;++i) //   \|/
                mat[i][b]=1;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends