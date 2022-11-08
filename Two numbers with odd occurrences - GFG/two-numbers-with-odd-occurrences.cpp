//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int xxory=0;
        for(int i=0;i<N;++i)
            xxory=xxory^Arr[i];
        long long int rsb=xxory & -xxory; //finding the rightmost set bit
        
        long long int a=0;
        long long int b=0;
        
        for(int i=0;i<N;++i)
        {
            if((rsb&Arr[i])==0)
                a=a^Arr[i];
            else
                b=b^Arr[i];
        }
        
        if(a>b)
            return {a,b};
        return {b,a};
            
    }
    //Pepcoding-SUmeet malik you beauty!! 
    //https://www.youtube.com/watch?v=pnx5JA9LNM4&t=428s
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends