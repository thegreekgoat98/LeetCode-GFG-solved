class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(auto&it:nums)
            mp[it]++;
        
        vector<vector<int>>ans;
        
        while(mp.size())
        {
            vector<int>temp;
            for(auto it:mp)
                temp.push_back(it.first);
            for(int i:temp)
            {
                mp[i]--;
                if(mp[i]==0)
                    mp.erase(i);
            }
            ans.push_back(temp);  
        }
        
        return ans;
    }
};