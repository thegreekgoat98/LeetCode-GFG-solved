//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++
//two pointers approach
long long maxArea(long long A[], int len)
{
    int i=0,j=len-1;
    long long maxArea=0;
    while(i<j)
    {
        long long currArea=min(A[i],A[j])*abs(i-j);
        maxArea=max(maxArea,currArea);
        
        if(A[i]<A[j])
            i++;
        else
            j--;
    }
    return maxArea;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends