class Solution {
public:
    unordered_map<char,int>mp;
    
    bool compare(string&a,string&b)
    {
        int n=a.size();
        int m=b.size();
        for(int i=0;i<min(n,m);++i)
        {
            if(mp[a[i]]<mp[b[i]])
                return true;
            else if(mp[a[i]]>mp[b[i]])
                return false;
        }
        if(a.size()>b.size())
            return false;
        return true;
    }
    
    
    bool isAlienSorted(vector<string>& words, string order) 
    {
        for(int i=0;i<order.size();++i)
            mp[order[i]]=i;
        
        for(int i=0;i<words.size()-1;++i)
            if(!compare(words[i],words[i+1]))
                return false;
        return true;
    }
};