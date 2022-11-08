class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        long long xxory=0;
        for(int i:nums)
            xxory^=i;
        long long rsb=xxory & -xxory;
        int a=0,b=0;
        for(int i:nums)
        {
            if((rsb&i)==0)
                a^=i;
            else
                b^=i;
        }
        return {a,b};
    }
};