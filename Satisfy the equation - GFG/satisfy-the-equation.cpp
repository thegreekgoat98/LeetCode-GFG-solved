//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public: //NICE HASHMAP PROBLEM
    vector<int> satisfyEqn(int A[], int N) 
    {
        vector<int>ans;
        unordered_map<int,pair<int,int>>mp;
        
        for(int i=0;i<N-1;++i)
        {
            for(int j=i+1;j<N;j++)
            {
                int sum=A[i]+A[j];
                auto x=mp.find(sum);
                if(x!=mp.end())
                {
                    if(mp[sum].first!=i && mp[sum].second!=i && mp[sum].first!=j && mp[sum].second!=j)
                    {
                        vector<int>temp={mp[sum].first,mp[sum].second,i,j};
                        if(ans.size()==0 || ans>temp)
                            ans=temp;
                    }
                }
                else
                {
                    mp[sum]={i,j};
                }
            }
        }
        if(ans.empty())
            return {-1,-1,-1,-1};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends