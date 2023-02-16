//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:

    int solve(int i,vector<int>&arr,vector<int>&dp,vector<bool>&vis)
    {
        if(arr[i]+i>=arr.size() || arr[i]+i<0)
            return 1;
        if(vis[i]) //if already visted
            return dp[i];
        //if aleady not visited
        vis[i]=true;
        dp[i]=solve(i+arr[i],arr,dp,vis);
        return dp[i];
    }
    
    int goodStones(int n,vector<int> &arr)
    {
        vector<int>dp(n,0);
        vector<bool>vis(n,false);
        
        for(int i=0;i<n;++i)
            dp[i]=solve(i,arr,dp,vis);
            
        int cnt=0;
        for(int i=0;i<n;++i)
            if(dp[i])
                cnt++;
        
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
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends