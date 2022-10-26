//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	unordered_map<int,int>mp;  //{sum,freq}
    	mp[0]=1;
    	int curr=0;
    	int cnt=0;
    	for(int i=0;i<n;++i)
    	{
    	    curr+=arr[i];
    	    auto x=mp.find(curr-sum);
    	    if(x!=mp.end())
    	        cnt+=x->second;
    	    mp[curr]++;
    	}
    	return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends