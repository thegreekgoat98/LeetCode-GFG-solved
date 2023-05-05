class Solution {
public:
    int maxVowels(string s, int k)
    {
        int cnt=0;
        int maxi=0;
        int i=0,j=0;
        while(j<s.size())
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
                cnt++;
            if(j-i+1<k)
                j++;
            else
            {
                maxi=max(maxi,cnt);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                    cnt--;
                i++;
                j++;    
            }
        }
        
        return maxi;
    }
};