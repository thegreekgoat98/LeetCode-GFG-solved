//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n)
	{
	    long long sum=1;
	    vector<long long>dp(n+1);
	    dp[0]=0;
	    dp[1]=1;
	    long long k=0;
	    for(long long i=2;i<=n;++i)
	    {
	        if(i>=6)
	            sum-=dp[k++];
	        dp[i]=sum*2;
	        sum+=dp[i];
	    }
	    return sum;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends