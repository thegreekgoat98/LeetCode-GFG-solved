class Solution {
public:
    int edgeScore(vector<int>& edges) 
    {
        map<int,long>mp;  //{ind,sum}
        for(int i=0;i<edges.size();++i)
            mp[edges[i]]+=i;
        long maxi=LLONG_MIN;
        int ind=0;
        for(auto it:mp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ind=it.first;
            }
        }
        
        return ind;
    }
};