//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) 
    {
        int i=0,j=0;
        long long sum=0;
        while(j<100)
        {
            sum+=GeekNum[j];
            if(j-i+1<K)
                j++;
            else if(j-i+1==K)
            {
                GeekNum.push_back(sum);
                sum-=GeekNum[i];
                i++;
                j++;
            }
        }
        return GeekNum[N-1];
    }
};
/*
SLIDING WINDOW: 
TC-->O(n)
SC:-->O(1)
*/


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends