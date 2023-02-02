//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  long long ans=-1;
  void dfs(int node,vector<int>&Edge,vector<bool>&vis,vector<bool>&dfsvis)
  {
      vis[node]=true;
      dfsvis[node]=true;
      
      if(Edge[node]!=-1)
      {
          int child=Edge[node];
          if(!vis[child])
              dfs(child,Edge,vis,dfsvis);
          else if(dfsvis[child])
          {
              int curr=child;
              long long sum=0;
              do
              {
                  sum+=curr;
                  curr=Edge[curr];
              }
              while(curr!=child);
              
              ans=max(ans,sum);
          }
      }
      dfsvis[node]=false;
  }
  
  long long largestSumCycle(int N, vector<int> Edge)
  {
      vector<bool>vis(N,false);
      vector<bool>dfsvis(N,false);
      
      for(int i=0;i<N;++i)
      {
          if(!vis[i])
                dfs(i,Edge,vis,dfsvis);
      }
      return ans;
  }
  
  //https://www.youtube.com/watch?v=oYIAlkZvCEg ---- beautiful and easily
};

//{ Driver Code Starts.
signed main(){
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
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends