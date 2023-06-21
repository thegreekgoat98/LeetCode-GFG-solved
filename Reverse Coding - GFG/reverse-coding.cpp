//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=1000000007;
    int sumOfNaturals(int n) 
    {
        int f=n%mod;
        int s=(n+1)%mod;
        
        long long ans=(f*1L*s)/2;
        return int(ans%mod);
    }
    //ONE OF THE WORST PROBLEM
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends