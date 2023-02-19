//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    
    bool isValid(int i,int j,vector<vector<int>>&mat)
    {
        if(i>=0 && i<mat.size() && j>=0 && j<mat[0].size())
            return true;
        return false;
    }
    
    int minIteration(int N, int M, int x, int y)
    {
        vector<vector<int>>mat(N,vector<int>(M,0));
        mat[x-1][y-1]=1;
        queue<pair<pair<int,int>,int>>q;
        q.push({{x-1,y-1},0});
        int cnt=0;
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int i=temp.first.first;
            int j=temp.first.second;
            cnt=temp.second;
            
            for(int k=0;k<4;++k)
            {
                int ni=dx[k]+i;
                int nj=dy[k]+j;
                
                if(isValid(ni,nj,mat) && mat[ni][nj]==0)
                {
                    q.push({{ni,nj},cnt+1});
                    mat[ni][nj]=1;
                }
            }
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends