class Solution {
public:
    int addDigits(int num) 
    {
        int sum=0;
        while(num)
        {
            sum=sum+(num%10);
            num=num/10;
        }
        if(sum<=9)
            return sum;
        
        return addDigits(sum);
    }
};