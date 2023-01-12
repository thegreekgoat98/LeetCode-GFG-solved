class Solution {
public:
    vector<int>ans;
    
    vector<int> dfs(int node,int par,string&labels,vector<int>adj[])
    {
        vector<int>count(26,0);
        
        for(auto it:adj[node])
        {
            if(it!=par)
            {
                vector<int>temp=dfs(it,node,labels,adj);
                
                for(int i=0;i<26;++i)
                    count[i]+=temp[i];
            }
        }
        
        int ch=labels[node]=labels[node]-'a';
        count[ch]++;
        
        ans[node]=count[ch];
        
        return count;  
    }
    
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) 
    {
        ans.resize(n,0);
        vector<int>adj[n];
        for(auto&it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        dfs(0,-1,labels,adj);
        
        return ans;  
    }
};

//https://www.youtube.com/watch?v=wfmBwyuHnfM  ----> watched this