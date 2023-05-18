class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges)
    {
        vector<int>ans;
        vector<bool>IndegreeZero(n,true); //true if indegree is 0
        
        for(auto& e:edges)
            IndegreeZero[e[1]]=false;
        
        for(int i=0;i<n;++i)
            if(IndegreeZero[i])
                ans.push_back(i);
        
        return ans;
    }
    
    // https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/discuss/805685/JavaC%2B%2BPython-Nodes-with-no-In-Degree
    
    // https://www.youtube.com/watch?v=7wGJ1nevpnc
};