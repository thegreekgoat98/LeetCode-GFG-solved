class Solution {
public:
    int numSplits(string s) 
    {
        int n=s.size();
        unordered_map<int,int>mp;
        int pf[n],sf[n];
        
        for(int i=0;i<n;++i)
        {
            mp[s[i]]++;
            pf[i]=mp.size();
        }
        
        cout<<endl;
        mp.clear();
        
        for(int i=n-1;i>=0;i--)
        {
            mp[s[i]]++;
            sf[i]=mp.size();
        }
        
        /////////////////////////////////////
        int cnt=0;
        for(int i=0;i<n-1;++i)
        {
            if(pf[i]==sf[i+1])
                cnt++;
        }
        
        return cnt;
    }
};