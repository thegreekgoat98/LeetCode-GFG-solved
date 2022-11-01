//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countEle(vector<vector<int>> &matrix,int key,int i,int C)
    {
        int l=0,h=C-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(matrix[i][mid]<=key)
                l=mid+1;
            else
                h=mid-1;
        }
        return l;
    }
    //////////////
    int median(vector<vector<int>> &matrix, int R, int C)
    {
        int l=0,h=2001;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int cnt=0; //count of elements which are smaller or equal than mid element
            
            for(int i=0;i<R;++i)
                cnt+=countEle(matrix,mid,i,C);
            
            if(cnt<=(R*C/2))
                l=mid+1;
            else
                h=mid-1;
        }
        return l;
    }
};
//BS ON ANSWER CONCEPT


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends