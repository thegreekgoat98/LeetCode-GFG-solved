class Solution {
public:
    bool isBipartite(int src,vector<int>adj[],vector<int>&color)
    {
        queue<int>q;
        q.push(src);
        color[src]=1;
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            for(auto it:adj[node])
            {
                if(color[it]==-1)
                {
                    color[it]=1-color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])
                    return false;
            }
        }
        return true;
    }
    //////////////////////
    bool checkBipartite(vector<int>adj[],int n)
    {
        vector<int>color(n,-1);
        
        for(int i=0;i<n;++i)
        {
            if(color[i]==-1)
                if(!isBipartite(i,adj,color))
                    return false;
        }
        return true;
    }
    ////////////////////////////
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>adj[n];
        int i=0;
        for(auto&temp:graph)
        {
            for(auto&it:temp)
            {
                adj[i].push_back(it);
                adj[it].push_back(i);
            }  
            i++;
        }
        
        return checkBipartite(adj,n);
    }
};