//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int n, int m, vector<vector<int>>&mat)  
    {
        vector<int>ans;
        
        int top=0,down=n-1,left=0,right=m-1;
        int dir=0;
        
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;++i)
                    ans.push_back(mat[top][i]);
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;++i)
                    ans.push_back(mat[i][right]);
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;--i)
                    ans.push_back(mat[down][i]);
                down--;
            }
            else //dir==3
            {
                for(int i=down;i>=top;--i)
                    ans.push_back(mat[i][left]);
                left++;
            }
            dir=(dir+1)%4;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends