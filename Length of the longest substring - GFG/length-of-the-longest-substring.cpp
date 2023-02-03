//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S)
    {
        int n=S.size();
        int mp[256]={0};
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
                // if(mp[S[i]]==0)
                //     mp.erase(S[i]);
                i++;
            }
        }
        return len;
    }
};
//O(n) ---> SLIDING WINDOW

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends