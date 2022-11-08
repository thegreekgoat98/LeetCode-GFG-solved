class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int>freq;
        for(int i:arr)
            freq[i]++;
        
        set<int>st;
        for(auto it:freq)
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