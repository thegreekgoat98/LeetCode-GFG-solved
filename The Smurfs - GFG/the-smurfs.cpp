//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[])
    {
        int r=0,b=0,g=0;
        for(int i=0;i<n;++i)
        {
            if(a[i]=='R')
                r++;
            else if(a[i]=='G')
                g++;
            else //(a[i]=='B')
                b++;
        }
        if(r==n || b==n || g==n)
            return n;
        if((r%2==0 && g%2==0 && b%2==0) || (r%2==1 && g%2==1 && b%2==1))
            return 2;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends