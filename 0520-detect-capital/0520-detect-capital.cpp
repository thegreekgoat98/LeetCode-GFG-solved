class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        bool allCapital=true;
        bool allSmall=true;
        bool OnlyFirstCapital=false;
        
        for(char ch:word)
        {
            if(ch>='a' && ch<='z')
            {
                allCapital=false;
                break;
            }
        }
        //////////////////////////////////////////
        for(char ch:word)
        {
            if(ch>='A' && ch<='Z')
            {
                allSmall=false;
                break;
            }
        }
        
        if(word[0]>='A' && word[0]<='Z')
            OnlyFirstCapital=true;
        
        for(int i=1;i<word.size();++i)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                OnlyFirstCapital=false;
                break;
            }
        }
        /////////////////////////
        return allCapital || allSmall || OnlyFirstCapital;
            
    }
};