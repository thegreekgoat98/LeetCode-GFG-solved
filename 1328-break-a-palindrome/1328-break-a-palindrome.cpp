class Solution {
public:
    string breakPalindrome(string palindrome) 
    {
        if(palindrome.size()==1)
            return "";
        int n=palindrome.size();
        int mid=n/2;
        for(int i=0;i<mid;++i)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[n-1]++;
        return palindrome; 
    }
};