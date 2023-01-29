//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int a, int b) 
    {
        if(a==b) //if both are same, they do not require more operations.
            return 0;
        if((a&b)==a || (a&b)==b) // refer to the video link for clear understanding.
            return 1;
        return 2; //a&0=0 ....... b&0=0 ---> So in this case answer is 2.
    }
};
//https://www.youtube.com/watch?v=oXp7a59iZCc


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.solve(a, b);
        
        printf("%d\n", res);
        
    }
}

// } Driver Code Ends