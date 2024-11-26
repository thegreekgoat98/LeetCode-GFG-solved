class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) 
    {
        vector<int>indegree(n,0);
        for(vector<int>&edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            indegree[v]++;
        }
        
        vector<int>res;
        for(int i=0;i<n;++i)
        {
            if(indegree[i]==0)
                res.push_back(i);
        }
        if(res.size()==1)
            return res[0];
        return -1;
    }
};