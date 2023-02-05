//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) 
	{
	    int n=txt.size();
	    int k=pat.size();
	    map<char,int>mp1,mp2;
	    for(char&ch:pat)
	        mp1[ch]++;
	    
	    int cnt=0;
	    int i=0,j=0;
	    while(j<n)
	    {
	        mp2[txt[j]]++;
	        if(j-i+1<k)
	            j++;
	        else if(j-i+1==k)
	        {
	            if(mp1==mp2)
	                cnt++;
	            mp2[txt[i]]--;
	            if(mp2[txt[i]]==0)
	                mp2.erase(txt[i]);
	            i++;
	            j++;
	        }
	            
	    }
	    
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends