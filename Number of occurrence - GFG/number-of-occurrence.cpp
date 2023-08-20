//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int BSforFirst(int arr[],int n,int x)
    {
        int res=-1;
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(arr[mid]==x)
            {
                res=mid;
                r=mid-1;
            }
            else if(arr[mid]>x)
                r=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
    /////////////////////////////////////////////
    int BSforLast(int arr[],int n,int x)
    {
        int res=-1;
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(arr[mid]==x)
            {
                res=mid;
                l=mid+1;
            }
            else if(arr[mid]>x)
                r=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
    
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) 
	{
	    int firstOccurrence=BSforFirst(arr,n,x);
	    int lastOccurrence=BSforLast(arr,n,x);
	    
	    return (firstOccurrence==-1 && lastOccurrence==-1) ? 0 : (lastOccurrence-firstOccurrence+1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends