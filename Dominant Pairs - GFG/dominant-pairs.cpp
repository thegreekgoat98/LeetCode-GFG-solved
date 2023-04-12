//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr)
    {
        int h=n/2;
        sort(arr.begin(),arr.begin()+h);
        sort(arr.begin()+h,arr.end());
        
        int i=h-1;
        int j=n-1;
        
        int cnt=0;
        while(i>=0 && j>=h)
        {
            if(arr[i]>=(5*arr[j]))
            {
                cnt+=(j-h+1);
                i--;
            }
            else
                j--;
        }
        
        return cnt;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends