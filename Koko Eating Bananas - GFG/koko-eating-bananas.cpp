//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  
    bool isPossible(int x,vector<int>&piles,int H)
    {
        int cnt=0;
        for(int i=0;i<piles.size();++i)
        {
            cnt+=(piles[i]/x);
            
            if(piles[i]%x!=0)
                cnt++;
        }
        return cnt<=H;
    }
    
    int Solve(int N, vector<int>& piles, int H) 
    {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=0;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(isPossible(mid,piles,H))
            {
                r=mid-1;
                ans=mid;
            }
            else
                l=mid+1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends