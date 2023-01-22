class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) 
    {
        int n=score.size();
        int m=score[0].size();
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<score.size();++i)
            pq.push({score[i][k],score[i]});
        
        vector<vector<int>>ans(n,vector<int>(m));
        int i=0;
        while(!pq.empty())
        {
            auto tp=pq.top();
            pq.pop();
            
            ans[i++]=tp.second;
        }
        
        return ans;
    }
};