//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int ans=INT_MAX;
        
        int i=0,j=0;
        long long currSum=0;
        
        while(j<n)
        {
            currSum+=arr[j];
            
            while(currSum>x)
            {
                ans=min(ans,j-i+1);
                currSum-=arr[i];
                i++;
            }
            j++;
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends