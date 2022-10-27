//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	long long subCount(long long arr[], int N, long long K)
	{
	    unordered_map<long long,long long>mp; //{sum,freq}
	    mp[0]=1;
	    long long sum=0;
	    long long cnt=0;
	    for(int i=0;i<N;++i)
	    {
	        sum+=arr[i];
	        sum%=K;
	        if(sum<0)
	            sum+=K;
	        auto x=mp.find(sum);
	        if(x!=mp.end())
	        {
	            cnt+=x->second;
	            mp[sum]++;
	        }
	        else
	        {
	            mp[sum]=1;
	        }
	    }
	    return cnt;
	    
	}



};


//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends