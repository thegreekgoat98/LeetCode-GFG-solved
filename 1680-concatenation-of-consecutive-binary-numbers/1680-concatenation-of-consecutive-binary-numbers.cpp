class Solution {
public://this is a very good observation question on BIT MANIPULATION
    //TECH DOSE (https://www.youtube.com/watch?v=ttlNQ6YrdGs)
    int mod=1e9+7;
    int concatenatedBinary(int n) 
    {
        long long val=0;
        int i=1;
        while(i<=n)
        {
            int d=(1+int(log2(i)));
            val=((val<<d)%mod+i)%mod;
            i++;
        }
        return val;
    }
};