class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n<=0)
            return false;
        
        return (n&(n-1))==0 && (n-1)%3==0;
    }
    //should be a power of 2
    //n-1 should be a multiple of 3
};