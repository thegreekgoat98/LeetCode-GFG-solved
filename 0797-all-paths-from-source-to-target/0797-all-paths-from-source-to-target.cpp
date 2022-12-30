class Solution {
public:
    vector<vector<int>>ans;
    
    void dfs(int curr,vector<int>&path,vector<int>adj[],int sz)
    {
        path.push_back(curr);
        if(curr==sz-1)
            ans.push_back(path);
        else
        {
            for(auto it:adj[curr])
                dfs(it,path,adj,sz);
        }
        
        path.pop_back();
    }
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        //building the adjacancy list
        vector<int>adj[n];
        int i=0;
        for(auto it:graph)
        {
            vector<int>temp=it;
            for(auto jt:temp)
                adj[i].push_back(jt);
            i++;
        }
        //dfs through node 0.
        vector<int>path;
        dfs(0,path,adj,n);
        
        return ans;
    }
};