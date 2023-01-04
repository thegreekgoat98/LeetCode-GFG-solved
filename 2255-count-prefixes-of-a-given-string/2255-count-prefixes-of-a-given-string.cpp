class Solution {
public:
    int countPrefixes(vector<string>& words, string s) 
    {
        int cnt=0;
        for(string str:words)
        {
            if(s.size()<str.size())
                continue;
            string sub=s.substr(0,str.size());
            if(sub==str)
                cnt++;
        }
        return cnt;
    }
};