//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) 
    {
        int cnt=1;
        string a=A;
        while(A.length()<B.length())
        {
            A+=a;
            cnt++;
        }
        if(A.find(B)!=-1)
            return cnt;
        A+=a;
        cnt++;
        if(A.find(B)!=-1)
            return cnt;
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends