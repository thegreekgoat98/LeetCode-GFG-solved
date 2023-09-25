class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        unordered_map<char,int>mp;
        for(auto&ch:s)
            mp[ch]++;
        
        for(auto&ch:t)
        {
            mp[ch]--;
            if(mp[ch]==0)
                mp.erase(ch);
        }
        
        for(auto&it:mp)
            return it.first;
        
        return 'a';
    }
};