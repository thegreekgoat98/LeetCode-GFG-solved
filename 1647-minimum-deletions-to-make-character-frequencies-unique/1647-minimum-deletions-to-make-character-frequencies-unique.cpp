class Solution {
public:
    int minDeletions(string s) 
    {
        int freq[26]={0};
        
        for(char&ch:s)
            freq[ch-'a']++;
        
        unordered_set<int>S;
        int cnt=0;
        
        for(int i=0;i<26;++i)
        {
            while(freq[i]>0 && S.find(freq[i])!=S.end())
            {
                freq[i]--;
                cnt++;
            }
            S.insert(freq[i]);
        }
        
        return cnt;
    }
};