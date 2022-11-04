class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        return false;
    }
    
    string reverseVowels(string s) 
    {
        vector<char>vow;
        for(auto it:s)
            if(isVowel(it))
                vow.push_back(it);
        
        reverse(vow.begin(),vow.end());
        
        int k=0;
        for(int i=0;i<s.size();++i)
            if(isVowel(s[i]))
                s[i]=vow[k++];
        
        return s;
    }
};