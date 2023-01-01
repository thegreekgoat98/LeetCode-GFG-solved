class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) 
    {
        vector<bool>check(10001,true);
        vector<int>prime;
        for(int i=2;i<=1000;++i)
        {
            if(check[i])
            {
                prime.push_back(i);
                for(int j=i;j<=1000;j+=i)
                    check[j]=false;
            }
        }
        set<int>s;
        for(auto x:nums)
        {
             for(auto y:prime)
             {
                 if(x%y==0)
                    s.insert(y);
             } 
        }
           
        
        return s.size();
        
    }
};