//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:

    int BinarySearch(int key,vector<int>&arr,int l,int r) //will return index of number we are searching for
    {
        int res=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]==key)
            {
                res=mid;
                r=mid-1;
            }
            else if(arr[mid]<key)
                l=mid+1;
            else if(arr[mid]>key)
                r=mid-1;
        }
        
        return res;
    }
    //////////////////////
    vector<long long> smallerSum(int n,vector<int> &arr)
    {
        vector<int>brr(arr);
        sort(brr.begin(),brr.end());
        vector<long long>pref(n,0);
        pref[0]=brr[0];
        for(int i=1;i<n;++i)
            pref[i]=pref[i-1]+brr[i];
        ///////////////////////////////
        vector<long long>ans(n);
        for(int i=0;i<n;++i)
        {
            int ind=BinarySearch(arr[i],brr,0,n-1);
            if(ind==0)
                ans[i]=0;
            else
                ans[i]=pref[ind-1];
        }
        
        return ans;
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
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends