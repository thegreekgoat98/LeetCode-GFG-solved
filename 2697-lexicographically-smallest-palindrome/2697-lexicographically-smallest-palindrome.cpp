class Solution {
public:
    string makeSmallestPalindrome(string s) 
    {
        int n=s.size();
        for(int i=0;i<n/2;++i)
        {
            if(s[i]==s[n-i-1])
                continue;
            else
                s[i]=s[n-i-1]=min(s[i],s[n-i-1]);
        }
        
        return s;
    }
};