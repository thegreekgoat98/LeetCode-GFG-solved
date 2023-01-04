class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int cnt=0;
        for(string str:words)
        {
            if(str.size()<pref.size())
                continue;
            string pre=str.substr(0,pref.size());
            if(pre==pref)
                cnt++;
        }
        
        return cnt;
    }
};