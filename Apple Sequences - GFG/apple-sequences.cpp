//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr)
    {
        int i=0,j=0;
        int ans=INT_MIN;
        while(j<n)
        {
            if(m>0)
            {
                if(arr[j]=='O')
                    m--;
            }
            else
            {
                if(arr[j]=='O')
                {
                    while(arr[i]!='O')
                        i++;
                    i++;
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends