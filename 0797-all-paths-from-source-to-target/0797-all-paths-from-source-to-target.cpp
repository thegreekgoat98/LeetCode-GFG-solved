class Solution {
public:
    vector<vector<int>>ans;
    void dfs(int curr,vector<int>adj[],vector<int>&path,vector<vector<int>>& graph)
    {
        path.push_back(curr);
        if(curr==graph.size()-1)
            ans.push_back(path);
        else
        {
            for(auto it:adj[curr])
                dfs(it,adj,path,graph);
        }
        path.pop_back();
    }
    ////////////
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        int i=0;
        vector<int>adj[n];
        for(auto it:graph)
        {
            vector<int>temp=it;
            for(auto jt:temp)
            {
                adj[i].push_back(jt);
            }
            i++;
        }
        ///////////////////////////
        vector<int>path;
        dfs(0,adj,path,graph);
        return ans;
    }
};