class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char>mp;
        set<char>S;
        for(int i=0;i<s.size();++i)
        {
            auto x=mp.find(s[i]);
            if(x==mp.end())
            {
                if(S.count(t[i])>0)
                    return false;
                mp[s[i]]=t[i];
                S.insert(t[i]);
            }
            else
            {
                if(mp[s[i]]!=t[i])
                    return false;
            }
        }
            
        return true; 
    }
};