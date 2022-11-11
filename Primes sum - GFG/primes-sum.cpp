//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N)
    {
        vector<bool>isPrime(N+1,true);
        isPrime[0]=isPrime[1]=false;
        
        for(int i=2;i<=N;++i)
        {
            if(isPrime[i] && (long long)i*i<=N)
            {
                for(int j=i*i;j<=N;j+=i)
                    isPrime[j]=false;
            }
        }
        for(int i=2;i<=N;++i)
        {
            if(isPrime[i] && isPrime[N-i])
                return "Yes";
        }
        
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends