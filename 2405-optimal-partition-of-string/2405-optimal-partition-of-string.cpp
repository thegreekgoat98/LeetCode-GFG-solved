class Solution {
public:
    int partitionString(string s) 
    {
        vector<int>lastSeen(26,-1);
        int cnt=0;
        int currentSubstrStart=0;
        
        for(int i=0;i<s.size();++i)
        {
            char ch=s[i];
            
            if(lastSeen[ch-'a']>=currentSubstrStart)
            {
                cnt++;
                currentSubstrStart=i;
            }
            
            lastSeen[ch-'a']=i;
        }
        
        return cnt+1;
    }
};

// https://www.youtube.com/watch?v=QonXo5Em5VA