//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) 
    {
        int cnt=0; //will count number of set bits
        int currPos=0; //will keep a track of current position
        int ans=-1; //will store the index of latest set bit
        while(N)
        {
            currPos++;
            int x=N&1;
            
            if(x!=0)
            {
                cnt++;
                ans=currPos;
            }
            
            N=N>>1;
        }
        
        return cnt==1?ans:-1;
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
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends