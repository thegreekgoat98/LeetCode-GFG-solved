class Solution {
public:
    int mod=1e9+7;
    int countHomogenous(string s) 
    {
        int n=s.size();
        int cnt=0;
        int i=0,j=0;
        unordered_map<int,int>mp;
        
        while(j<n)
        {
            mp[s[j]]++;
            
            while(mp.size()>1)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
            cnt+=(j-i+1);
            cnt%=mod;
            j++;
        }
        
        return cnt;
    }
};