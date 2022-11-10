//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int N)
    {
        vector<int>pos,neg;
        for(int i=0;i<N;++i)
        {
            if(arr[i]<0)
                neg.push_back(arr[i]);
            else
                pos.push_back(arr[i]);
        }
        int p=0;
        int n=0;
        int i=0;
        while(p!=pos.size())
            arr[i++]=pos[p++];
        i=p;
        while(n!=neg.size())
            arr[i++]=neg[n++];
            
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends