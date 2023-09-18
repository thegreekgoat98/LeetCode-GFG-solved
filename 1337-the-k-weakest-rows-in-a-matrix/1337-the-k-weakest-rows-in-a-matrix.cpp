class Solution {
public:
    vector<int>ans;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        
        int i=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:mat)
        {
            vector<int>temp=it;
            int ct=count(temp.begin(),temp.end(),1);
            pq.push({ct,i++});
        }
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};