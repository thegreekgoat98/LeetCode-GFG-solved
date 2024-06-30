class Solution {
public:
    vector<vector<int>>ans;
    void dfs(int ancestor, vector<int>adj[], int currNode)
    {
        for(int&ngbr:adj[currNode])
        {
            if(ans[ngbr].empty() || ans[ngbr].back()!=ancestor)
            {
                ans[ngbr].push_back(ancestor);
                dfs(ancestor,adj,ngbr);
            }
        }
    }
    /////////////////////////////////////////////////////////////////////
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) 
    {
        vector<int>adj[n];
        ans.resize(n);
        for(auto&edge:edges)
            adj[edge[0]].push_back(edge[1]);
        
        for(int i=0;i<n;++i)
        {
            int ancestor=i;
            dfs(ancestor,adj,i);
        }
        
        return ans;
    }
};

// https://www.youtube.com/watch?v=zdGouql8XKs   --> cdoe story with MIK --- th best