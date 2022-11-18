class Solution {
public:
    vector<int>gvn={2,3,5};
    bool isUgly(int n) 
    {
        if(n<1)
            return false;
       for(auto it:gvn)
       {
            while(n%it==0)
            {
                n/=it;
            }
       }
        return n==1;
    }
    
};

