class Solution {
public:
    string intToRoman(int N) 
    {
        int val[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string rom[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        int i=0;
        while(N)
        {
            while(N>=val[i])
            {
                ans+=rom[i];
                N-=val[i];
            }
            i++;
        }
        return ans;
    }
};
//bit complex
//https://leetcode.com/problems/integer-to-roman/discuss/1102775/JS-Python-Java-C%2B%2B-or-Simple-Solution-w-Explanation ----- got in the comments