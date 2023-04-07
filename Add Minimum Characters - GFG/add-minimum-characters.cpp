//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    bool ispalindrome(string& str)
    {
        int i=0,j=str.size()-1;
        while(i<j)
        {
            if(str[i]!=str[j])
                return false;
            else
                i++;
                
            j--;
        }
        return true;
    }
    //////////////////////////////////
    int addMinChar(string str)
    {   
        if(ispalindrome(str))
            return 0;
        // int n=str.size();
        for(int i=str.size()-1;i>=0;i--)
        {
            string sub=str.substr(0,i);
            if(ispalindrome(sub))
                return str.size()-i;
        }
        return str.size();
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends