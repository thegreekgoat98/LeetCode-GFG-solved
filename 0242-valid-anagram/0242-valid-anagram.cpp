class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int n=s.size(),m=t.size();
        if(n!=m)
            return false;
        unordered_map<char,int>mp;
        for(int i=0;i<n;++i)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        for(auto&it:mp)
            if(it.second)
                return false;
        
        return true;
    }
};