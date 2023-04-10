//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool matching(char&a,char&b)
    {
        return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        
        for(auto&it:x)
        {
            if(st.empty())
                st.push(it);
            else
            {
                if(matching(st.top(),it))
                    st.pop();
                else
                    st.push(it);
            }
        }
        
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends