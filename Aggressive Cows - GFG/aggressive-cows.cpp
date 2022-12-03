//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool canPlaceCows(int dist,vector<int> &arr,int cows)
    {
        int cnt=1;
        int curr=arr[0];
        for(int i=1;i<arr.size();++i)
        {
            if(arr[i]-curr>=dist)
            {
                cnt++;
                curr=arr[i];
            }
            if(cnt==cows)
                return true;
        }
        return false;
    }
    

    int solve(int n, int k, vector<int> &arr) 
    {
        int res=0;
        sort(arr.begin(),arr.end());
        int l=1,r=arr[n-1]-arr[0];
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(canPlaceCows(mid,arr,k))
            {
                res=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends