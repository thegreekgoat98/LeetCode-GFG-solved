//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A)
		{
		    string ans="";
		    int n=A.size();
		    queue<char>q;
		    vector<int>cnt(26,0); //to count the frequency of the characters
		    
		    for(int i=0;i<n;++i)
		    {
		        q.push(A[i]);
		        int ch=A[i]-'a';
		        cnt[ch]++;
		        
		        while(!q.empty() && cnt[q.front()-'a']>1)
		            q.pop();
		        
		        if(q.empty())
		            ans+='#';
		        else
		            ans+=q.front();
		    }
		    
		    return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends