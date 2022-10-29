//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool check(int n)
    {
        vector<int>fact(10);
        fact[0]=fact[1]=1;
        for(int i=2;i<=9;++i)
            fact[i]=i*fact[i-1];
        ///////////////////
        int x=n;
        int sum=0;
        while(x)
        {
            int rem=x%10;
            sum+=fact[rem];
            x/=10;
        }
        return sum==n;
    }
    ////////
    string isKrishnamurthy(int N) 
    {
        if(check(N))
            return "YES";
        return "NO";
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
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends