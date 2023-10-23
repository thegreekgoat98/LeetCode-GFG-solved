//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int n=a.size();
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            int next=mid+1;
            int prev=mid-1;
            
            if(a[mid]>a[next] && a[mid]>a[prev])
                return a[mid];
            else if(a[mid]>a[prev] && a[mid]<a[next])
                l=mid+1;
            else if(a[mid]<a[prev] && a[mid]>a[next])
                r=mid-1;
            
        }
        return a[n-1];
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends