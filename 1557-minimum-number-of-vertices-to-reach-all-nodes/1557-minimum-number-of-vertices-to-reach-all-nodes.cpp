class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges)
    {
        vector<int>ans;
        vector<bool>seen(n);
        
        for(auto& e:edges)
            seen[e[1]]=true;
        
        for(int i=0;i<n;++i)
            if(!seen[i])
                ans.push_back(i);
        
        return ans;
    }
    
    // https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/discuss/805685/JavaC%2B%2BPython-Nodes-with-no-In-Degree
    
    // https://www.youtube.com/watch?v=7wGJ1nevpnc
};