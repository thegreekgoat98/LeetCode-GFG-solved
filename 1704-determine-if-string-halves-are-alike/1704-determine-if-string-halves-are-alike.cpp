class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        return false;
    }
    
    
    bool halvesAreAlike(string s) 
    {
        int cnt=0; //count number of vowels
        for(int i=0;i<s.size();++i)
        {
            if(i<s.size()/2)
            {
                if(isVowel(s[i]))
                    cnt++;
            }
                
            else
            {
                if(isVowel(s[i]))
                    cnt--;
            }   
        }
        return (cnt==0);
    }
};