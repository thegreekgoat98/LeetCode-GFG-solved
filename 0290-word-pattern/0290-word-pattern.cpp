class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        vector<string>coll;
        string word="";
        for(auto x:s)
        {
            if(x==' ')
            {
                coll.push_back(word);
                word="";
            }
            else
                word+=x;
        }
        coll.push_back(word);
        // for(auto it:coll)
        //     cout<<it;
        
        
        if(coll.size()!=pattern.size())
            return false;
        unordered_map<char,string>mp;
        set<string>S;
        for(int i=0;i<pattern.size();++i)
        {
            auto x=mp.find(pattern[i]);
            if(x!=mp.end())
            {
                if(mp[pattern[i]]!=coll[i])
                    return false;
            }
            else
            {
                if(S.count(coll[i]))
                    return false;
                mp[pattern[i]]=coll[i];
                S.insert(coll[i]); 
            }     
        }
        
        return true;
    }
};