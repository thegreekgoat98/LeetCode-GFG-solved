class Solution {
public:
    int mod=1e9+7;
    int numSub(string s) 
    {
        int n=s.size();
        int i=0,j=0;
        int cnt=0;
        unordered_map<char,int>mp;
        
        while(j<n)
        {
            if(s[j]=='1')
            {
                mp[s[j]]++;
                cnt+=(j-i+1);
                cnt%=mod;
                j++;
            }
            else
            {
                mp.clear();
                j++;
                i=j;
            }    
        }
        
        return cnt;
    }
};