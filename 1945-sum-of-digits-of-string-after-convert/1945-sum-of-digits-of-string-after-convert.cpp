class Solution {
public:
    int findSum(int n)
    {
        int sum=0;
        while(n)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        return sum;
    }
    //////////////////////////////////
    int getLucky(string s, int k) 
    {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int num=int(s[i])-96;
            sum=sum+findSum(num);
        }
        
        for(int i=1;i<k;i++)
            sum=findSum(sum);
        
        return sum;
    }
};