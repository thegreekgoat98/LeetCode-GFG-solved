//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    vector<int> asteroidCollision(int N, vector<int> &ast) 
    {
        stack<int>st;
        for(int i=0;i<N;++i)
        {
            if(st.empty() || ast[i]>0)
                st.push(ast[i]);
            else
            {
                while(!st.empty() && st.top()>0 && abs(ast[i])>st.top())
                    st.pop();
                if(!st.empty() && st.top()==abs(ast[i]))
                    st.pop();
                else if(st.empty() || st.top()<0)
                    st.push(ast[i]);
            }
        }
        
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends