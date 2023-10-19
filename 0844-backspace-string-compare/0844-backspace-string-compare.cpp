class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        /////////////////////
        string news="",newt="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#')
            {
                news=news+s[i];
                continue;
            }
            if(news.empty())
                continue;
            news.pop_back();
        }
        
        for(int i=0;i<m;i++)
        {
            if(t[i]!='#')
            {
                newt=newt+t[i];
                continue;
            }
            if(newt.empty())
                continue;
            newt.pop_back();
        }
        if(news==newt)
            return true;
        return false;
    }
};