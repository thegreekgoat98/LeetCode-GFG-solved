class Solution {
public:
    bool judgeSquareSum(int c)
    {
        long l=0,r=sqrt(c);
        
        while(l<=r)
        {
            long val=l*l+r*r;
            if(val<c)
                l++;
            else if(val>c)
                r--;
            else
                return true;
        }
        
        return false;
    }
};