class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gS) 
    {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>ans;
        for(int i=0;i<gS.size();++i)
        {
            mp[gS[i]].push_back(i);
            if(mp[gS[i]].size()==gS[i])
            {
                ans.push_back(mp[gS[i]]);
                mp[gS[i]].clear();
            }
        }
        return ans;
    }
};