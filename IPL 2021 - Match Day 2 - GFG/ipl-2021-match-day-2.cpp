//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public: // this question is same as Maximum of all subarrays of size k.
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) 
    {
        vector<int>ans;
        deque<int>dq;
        
        // we have to maintain elements inside the deque in decreasing manner, so that when window size is hit, we can pushback the front element of deque
        for(int i=0;i<n;++i)
        {
            if(!dq.empty() && dq.front()==i-k) //if out of bound
                dq.pop_front();
            
            while(!dq.empty() && arr[dq.back()]<arr[i]) //if the arrangement inside deque is not decreasing
                dq.pop_back();
                
            dq.push_back(i); //push the index
                
            if(i>=k-1) //if window size is hit
                ans.push_back(arr[dq.front()]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends