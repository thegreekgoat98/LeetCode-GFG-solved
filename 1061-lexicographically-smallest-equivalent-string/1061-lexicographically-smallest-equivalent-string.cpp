class Solution {
public:
    
    char dfs(unordered_map<char,vector<char>>&adj,vector<bool>&vis,char curr)
    {
        vis[curr-'a']=true;
        char mini=curr;
        
        for(char&v:adj[curr])
            if(!vis[v-'a'])
                mini=min(mini,dfs(adj,vis,v));
        
        return mini;
    }
    ///////////////////////////////////////
    string smallestEquivalentString(string s1, string s2, string baseStr) 
    {
        int n=s1.size();
        unordered_map<char,vector<char>>adj;
        for(int i=0;i<n;++i)
        {
            char u=s1[i];
            char v=s2[i];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        //////////////////////////////////////////////////
        string ans="";
        for(int i=0;i<baseStr.size();++i)
        {
            vector<bool>vis(26,false);
            char mini=dfs(adj,vis,baseStr[i]);
            ans+=mini;
        }
        
        return ans;
    }
};

//https://www.youtube.com/watch?v=DsAIuJmiT1c