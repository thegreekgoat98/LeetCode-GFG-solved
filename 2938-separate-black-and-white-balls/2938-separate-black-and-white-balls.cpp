class Solution {
public:
    long long minimumSteps(string s) 
    {
        int n=s.size();
        long long swap=0;
        int black=0;
        
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1')
                black++;
            else
                swap+=black;
        }
        return swap;
    }
};

// https://www.youtube.com/watch?v=E6AKLOdt9jc -- codestorywithmik