//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) 
    {
        map<map<char,int>,vector<string>>mp;
        
        for(string str:string_list)
        {
            map<char,int>fmap;
            for(auto it:str)
                fmap[it]++;
            
            
            mp[fmap].push_back(str);
            
        }
        
        vector<vector<string>>ans;
        for(auto it=mp.begin();it!=mp.end();++it)
            ans.push_back(it->second);
        sort(ans.begin(),ans.end());
            
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends