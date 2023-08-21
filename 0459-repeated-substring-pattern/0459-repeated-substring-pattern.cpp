class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n=s.size();
        
        for(int i=n/2;i>=1;--i)
        {
            if(n%i==0)
            {
                int times=n/i;
                string pattern=s.substr(0,i);
                string newStr="";
                while(times--)
                    newStr+=pattern;
                
                if(newStr==s)
                    return true;
            }
        }
        return false;
    }
};

//https://www.youtube.com/watch?v=7J8x0XudV0Y -- CODESTORYWITHMIK -- the best