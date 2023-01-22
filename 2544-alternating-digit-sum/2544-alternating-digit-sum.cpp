class Solution {
public:
    int alternateDigitSum(int n) 
    {
        int sum=0;
        string str=to_string(n);
        for(int i=0;i<str.size();++i)
            sum+=(i%2?-1:1)*(str[i]-'0');
        
        return sum;
    }
};