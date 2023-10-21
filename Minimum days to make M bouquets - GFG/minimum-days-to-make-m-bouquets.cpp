//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool check(int day,vector<int> &bloomDay,int m,int k)
    {
        int curr=0,cnt=0;
        
        for(int i=0;i<bloomDay.size();++i)
        {
            if(bloomDay[i]<=day)
                curr++;
            else
                curr=0;
                
            if(curr==k)
            {
                cnt++;
                curr=0;
            }
        }
        
        return cnt>=m;
    }
  //////////////////////////////////////////////////////
    int solve(int M, int K, vector<int> &bloomDay)
    {
        int res=-1;
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(check(mid,bloomDay,M,K))
            {
                res=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends