//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	//Pepcoding understood very very very very welllllllll--- SUMIT MALIK ZINDABAD
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    long long sum=0;
	    unordered_map<long long,int>mp;
	    mp[sum]=-1;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        int rem=sum%k;
	        
	        if(rem<0)
	            rem+=k;
	            
	       auto it=mp.find(rem);
	       if(it==mp.end())
	            mp[rem]=i;
	       else
	           ans=max(ans,i-mp[rem]);
	        
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends