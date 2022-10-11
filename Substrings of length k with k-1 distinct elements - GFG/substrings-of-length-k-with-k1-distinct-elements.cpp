//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   
    int countOfSubstrings(string S, int k) 
    {
        int n=S.size();
        int i=0,j=0;
        int cnt=0;
        unordered_map<char,int>mp;
        while(j<n)
        {
            mp[S[j]]++;
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                if(mp.size()==k-1)
                    cnt++;
                mp[S[i]]--;
                if(mp[S[i]]==0)
                    mp.erase(S[i]);
                i++;
                j++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends