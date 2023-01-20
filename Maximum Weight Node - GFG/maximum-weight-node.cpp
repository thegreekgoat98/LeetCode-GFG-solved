//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
    map<int,int>mp;
    for(int i=0;i<Edge.size();++i)
        if(Edge[i]!=-1)
            mp[Edge[i]]+=i;
            
    int maxWeight=INT_MIN;
    int node=0;
    
    for(auto it:mp)
    {
        if(it.second>=maxWeight)
        {
            maxWeight=it.second;
            node=it.first;
        }
    }
        
    return node;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends