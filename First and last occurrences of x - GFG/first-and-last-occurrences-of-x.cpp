//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int BSl(int arr[],int n,int key)
    {
        int res=-1;
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(arr[mid]==key)
            {
                res=mid;
                l=mid+1;
            }
            else if(arr[mid]>key)
                r=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
    ///////////////////////////////////////////
    int BSf(int arr[],int n,int key)
    {
        int res=-1;
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(arr[mid]==key)
            {
                res=mid;
                r=mid-1;
            }
            else if(arr[mid]>key)
                r=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
    //////////////////////////////////
    vector<int> find(int arr[], int n , int x )
    {
        int a=BSf(arr,n,x);
        int b=BSl(arr,n,x);
        
        return {a,b};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends