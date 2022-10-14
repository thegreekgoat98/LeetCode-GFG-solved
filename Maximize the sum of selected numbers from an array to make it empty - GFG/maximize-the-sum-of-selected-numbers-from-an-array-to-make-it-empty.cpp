//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends

class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<n;++i)
            mp[a[i]]++;
        int ans=0;
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;++i)
        {
            if(mp[a[i]]>0)
            {
                ans+=a[i];
                mp[a[i]]--;
                if(mp[a[i]-1]>0)
                    mp[a[i]-1]--;
            }
        }
        return ans;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends