//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int n=S.size();
    unordered_map<char,int>mp;
    int i=0,j=0;
    int len=0;
    while(j<n)
    {
        if(mp[S[j]]==0)
        {
            mp[S[j]]++;
            len=max(len,j-i+1);
            j++;
        }
        else
        {
            mp[S[i]]--;
            if(mp[S[i]]==0)
                mp.erase(S[i]);
            i++;
        }
    }
    return len;
}