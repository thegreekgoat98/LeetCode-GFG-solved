class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        vector<pair<char,int>>st;
        for(auto ch:s)
        {
            if(st.size()==0 || st.back().first!=ch)
                st.push_back({ch,1});
            else
                st.back().second++;
            
            
            if(st.back().second==k)
                st.pop_back();
        }
        string ans;
        for(auto it:st)
            ans.append(it.second,it.first);
        return ans;
    }
};