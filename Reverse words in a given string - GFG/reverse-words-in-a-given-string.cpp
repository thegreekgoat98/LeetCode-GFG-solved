//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n=S.size();
        stack<string>st;
         
        for(int i=0;i<n;++i)
        {
            string word="";
            while(S[i]!='.' && i<n)
            {
                word+=S[i];
                i++;
            }
            st.push(word);
        }
        /////////////////////
        S.clear();
        
        while(!st.empty())
        {
            S+=st.top();
            S+='.';
            st.pop();
        }
        
        S.pop_back();
        
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends