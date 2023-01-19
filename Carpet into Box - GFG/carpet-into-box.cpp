//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D)
    {
        int ans=0;
        int cnt=0;
        
        int a=A;
        int b=B;
        while(a>C || b>D)
        {
            if(a>C)
            {
                cnt++;
                a/=2;
            }
            if(b>D)
            {
                cnt++;
                b/=2;
            }
        }
        ans=cnt;
        cnt=0;
        
        a=B;
        b=A;
        
        while(a>C || b>D)
        {
            if(a>C)
            {
                cnt++;
                a/=2;
            }
            if(b>D)
            {
                cnt++;
                b/=2;
            }
        }
        
        ans=min(ans,cnt);
        
        return ans;
        
    }
};
//understood from--->>> https://www.youtube.com/watch?v=YojArl-W0ic


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends