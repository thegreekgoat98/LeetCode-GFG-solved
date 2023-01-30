class Solution {
public:
    int tribonacci(int n) 
    {
        long long tribo[40];
        tribo[0]=0;
        tribo[1]=1;
        tribo[2]=1;
        for(int i=3;i<40;i++)
            tribo[i]=tribo[i-1]+tribo[i-2]+tribo[i-3];
        ////////////////////////////////////
        return tribo[n];
    }
};