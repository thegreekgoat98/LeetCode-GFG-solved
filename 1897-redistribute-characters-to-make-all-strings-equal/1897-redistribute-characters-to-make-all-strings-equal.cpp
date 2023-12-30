class Solution {
public:
    bool makeEqual(vector<string>& words) 
    {
        int n=words.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;++i)
            for(int k=0;k<words[i].size();++k)
                mp[words[i][k]]++;
        
        for(auto it:mp)
            if(it.second%n)
                return false;
        
        return true;
    }
};