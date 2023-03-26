class Solution {
public:
    int res=-1;
    
    void dfs(int u,vector<int>&edges,vector<bool>&vis,vector<bool>&dfsVis,vector<int>&count)
    {
        vis[u]=true;
        dfsVis[u]=true;
        
        int v=edges[u];
        
        if(v!=-1 && !vis[v])
        {
            count[v]=count[u]+1;
            dfs(v,edges,vis,dfsVis,count);
        }
        else if(v!=-1 && dfsVis[v])
            res=max(res,count[u]-count[v]+1);
        
        dfsVis[u]=false;
    }
    /////////////////////////////////////
    int longestCycle(vector<int>& edges) 
    {
        int n=edges.size();
        vector<bool>vis(n,false);
        vector<bool>dfsVis(n,false);
        vector<int>count(n,1);
        
        for(int i=0;i<n;++i)
        {
            if(!vis[i])
                dfs(i,edges,vis,dfsVis,count);
        }
        
        return res;
    }
    
    /*https://www.youtube.com/watch?v=m6cp4eHWLak*/
/*https://github.com/MAZHARMIK/Interview_DS_Algo/blob/master/Graph/BFS_DFS/Longest%20Cycle%20in%20a%20Graph.cpp*/
};