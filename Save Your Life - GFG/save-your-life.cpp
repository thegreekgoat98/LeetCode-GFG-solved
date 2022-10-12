//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     string maxSum(string w,char x[], int b[],int n)
     {
        unordered_map<char,int>mp;
        for(int i=0;i<n;++i)
            mp[x[i]]=b[i];
        ///////
        string ans;
        int maxi=INT_MIN;
        int curr=0;
        string currstr="";
        for(int i=0;i<w.size();++i)
        {
            currstr+=w[i];
            auto it=mp.find(w[i]);
            if(it==mp.end())
                curr+=(int)w[i];
            else
                curr+=mp[w[i]];
            // curr+=max(mp[w[i]],(int)w[i]);
            if(maxi<curr)
            {
                maxi=curr;
                ans=currstr;
            }
            if(curr<0)
            {
                curr=0;
                currstr.clear();
            }
        }
        return ans;
      }
      //KADANE's ALGORITHM
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends