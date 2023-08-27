class Solution {
public:
    int minimumSum(int n, int k) 
    {
        unordered_set<int>S;
        int sum=0;
        int val=1;
        while(S.size()<n)
        {
            int rem=k-val;
            auto x=S.find(rem);
            
            if(x==S.end())
            {
                S.insert(val);
                sum+=val;
            }
            val++;
        }
        
        return sum;
    }
};