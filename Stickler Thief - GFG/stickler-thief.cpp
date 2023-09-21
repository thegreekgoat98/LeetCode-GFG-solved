//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    int dp[100001];
    int solve(int currInd,int arr[],int n)
    {
        if(currInd>=n)
            return 0;
            
        if(dp[currInd]!=-1)
            return dp[currInd];
            
        int steal=arr[currInd]+solve(currInd+2,arr,n);
        int not_steal=solve(currInd+1,arr,n);
        
        return dp[currInd]=max(steal,not_steal);
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        memset(dp,-1,sizeof(dp));
        return solve(0,arr,n);
    }
    
    // https://www.youtube.com/watch?v=SI6Pm8AKqnQ
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends