//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
    {
        stack<string>st;
        for(int i=0;i<s.size();++i)
        {
            if(isdigit(s[i]))
            {
                int temp=0;
                while(isdigit(s[i]))
                {
                    string ss="";
                    ss+=s[i];
                    int k=stoi(ss);
                    temp=temp*10+k;
                    i++;
                }
                string str=to_string(temp);
                st.push(str);
                i--;
            }
            else
            {
                string str="";
                str+=s[i];
                st.push(str);
            }
         }
         //////////////////////////////////
         
         string ans="";
         while(!st.empty())
         {
             ans+=st.top();
             st.pop();
         }
         
         return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends