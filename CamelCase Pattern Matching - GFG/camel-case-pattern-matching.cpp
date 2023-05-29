//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool match(string& word,string& pattern)
    {
        string str="";
        for(char&ch:word)
        {
            if(isupper(ch))
                str+=ch;
            
            if(str==pattern)
                return true;
        }
        return false;
        
    }
    //////////////////////////////////////////////////////
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) 
    {
        vector<string>ans;
        
        for(string& word:Dictionary)
            if(match(word,Pattern))
                ans.push_back(word);
                
        if(ans.empty())
            return {"-1"};
        
        sort(ans.begin(),ans.end());
        
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
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends