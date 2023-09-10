class Solution {
public:
    int mod=1e9+7;
    int countOrders(int n) 
    {
        if(n==1)
            return 1;
        
        long long result=1;
        for(int i=2;i<=n;++i)
        {
            int spaces=(i-1)*2+1;
            int curr_poss=spaces*(spaces+1)/2;
            
            result*=curr_poss;
            
            result%=mod;
        }
        
        return result;
    }
};

//https://www.youtube.com/watch?v=JlBSoswl87c  -- Brilliant explanation