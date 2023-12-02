class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        vector<int>freq(26,0);
        for(auto&ch:chars)
            freq[ch-'a']++;
        
        int cnt=0;
        for(auto&str:words)
        {
            bool flag=true;
            vector<int>freqStr(26,0);
            for(char ch:str)
            {
                if(++freqStr[ch-'a']>freq[ch-'a'])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cnt+=str.size();
        }
        
        return cnt;
    }
};

// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/discuss/570313/C%2B%2B-HashMap-Solution-greater-(Commented-greater-Easy-to-Read-and-Understand)