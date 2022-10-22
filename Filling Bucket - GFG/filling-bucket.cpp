//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=1e8;
    int fillingBucket(int N) 
    {
        vector<int>dp(N+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        for(int i=4;i<=N;++i)
            dp[i]=(dp[i-1]+dp[i-2])%mod;
            
        return dp[N];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends