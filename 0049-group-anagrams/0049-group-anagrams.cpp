class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<map<char,int>,vector<string>>mp;
        
        for(string str:strs)
        {
            map<char,int>fmap;
            for(auto it:str)
                fmap[it]++;
            
            auto x=mp.find(fmap);
            
            if(x==mp.end())
            {
                vector<string>temp;
                temp.push_back(str);
                mp[fmap]=temp;
            }
            else
            {
                x->second.push_back(str);
            }
        }
        
        vector<vector<string>>ans;
        for(auto it=mp.begin();it!=mp.end();it++)
			ans.push_back(it->second);
        
        return ans;
    }
};