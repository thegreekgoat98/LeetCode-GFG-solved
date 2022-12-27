     //sliding window technique
class Solution {
    
public:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            return true;
        return false;
    }
    
    int maxVowels(string s, int k) 
    {
        int i=0,j=0;
        int cnt=0;
        int maxi=INT_MIN;
        while(j<s.size())
        {
            if(isVowel(s[j]))
                cnt++;
            if(j-i+1<k)
                j++;
            else
            {
                maxi=max(maxi,cnt);
                if(isVowel(s[i]))
                    cnt--;
                i++;
                j++;
                
            }
        }
        return maxi;
        
    }
};