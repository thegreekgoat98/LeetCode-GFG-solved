//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long countEvenSum(int arr[], int n) 
    {
       unordered_map<long long,long long>mp;
       mp[0]=1;
       long long ans=0;
       long long sum=0;
       
       for(long long i=0;i<n;++i)
       {
            sum+=arr[i];
            int rem=sum%2;
           
            auto x=mp.find(rem);
            if(x==mp.end())
                mp[rem]++;
            else
            {
                ans+=mp[rem];
                mp[rem]++;
            }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countEvenSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends