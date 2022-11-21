//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<v1.size();++i)
            mp[v1[i]]++;
            
        vector<int>ans;
            
        for(int i=0;i<v2.size();++i)
        {
            auto x=mp.find(v2[i]);
            if(x!=mp.end())
            {
                ans.push_back(v2[i]);
                mp[v2[i]]--;
                if(mp[v2[i]]==0)
                    mp.erase(v2[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends