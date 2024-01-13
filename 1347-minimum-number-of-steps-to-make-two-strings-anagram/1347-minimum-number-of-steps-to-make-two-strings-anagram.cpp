class Solution {
public:
    int minSteps(string s, string t)
    {
        vector<int>mpS(26,0);
        vector<int>mpT(26,0);
        for(char &ch:s)
            mpS[ch-'a']++;

        for(char &ch:t)
            mpT[ch-'a']++;
        int cnt=0;
        for(int i=0;i<26;++i)
            cnt+=abs(mpS[i]-mpT[i]);
        
        return cnt/2;
    }
};