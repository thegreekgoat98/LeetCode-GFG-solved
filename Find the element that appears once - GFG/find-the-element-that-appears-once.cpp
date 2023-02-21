//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N)
	{
	    if(A[0]!=A[1])
	        return A[0];
	    
	    int l=0,r=N-1;
	    while(l<=r)
	    {
	        int mid=l+(r-l)/2;
	        if(A[mid]!=A[mid-1] && A[mid]!=A[mid+1])
	            return A[mid];
	        else if((mid%2!=0 && A[mid]==A[mid-1]) || (mid%2==0 && A[mid]==A[mid+1]))
	            l=mid+1;
	        else
	            r=mid-1;
	    }
	    return -1;
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends