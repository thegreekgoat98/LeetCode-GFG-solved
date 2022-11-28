class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        vector<vector<int>>ans(2,vector<int>());
        
        unordered_map<int,int>win,lose;
        for(auto it:matches)
        {
            vector<int>match=it;
            int winner=match[0];
            int loser=match[1];
            
            win[winner]++;
            lose[loser]++;
        }
        for(auto it:lose)
            if(it.second==1)
                ans[1].push_back(it.first);
        
        for(auto it:win)
        {
            auto x=lose.find(it.first);
            if(x==lose.end())
                ans[0].push_back(it.first);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        
        
        return ans;
    }
};