class Solution {
public:
    int partitionString(string s) 
    {
        int cnt=0;
        
        set<char>S;
        for(int i=0;i<s.size();++i)
        {
            if(S.empty())
            {
                cnt++;
                S.insert(s[i]);
                continue;
            }
            
            if(S.count(s[i]))
            {
                cnt++;
                S.clear();
                S.insert(s[i]);
            }
            else
                S.insert(s[i]);
                
        }
        
        return cnt;
    }
};