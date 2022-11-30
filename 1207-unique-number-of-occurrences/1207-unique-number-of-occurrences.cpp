class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int>mp;
        for(int num:arr)
            mp[num]++;
        
        unordered_set<int>st;
        for(auto it:mp)
        {
            int occ=it.second;
            auto x=st.find(occ);
            if(x!=st.end())
                return false;
            else
                st.insert(occ);
        }
        return true;
    }
};