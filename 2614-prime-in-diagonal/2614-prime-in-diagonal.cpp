class Solution {
public:
    bool isPrime(int n)
    {
        if(n<2)
            return false;
        for(int i=2;i*i<=n;++i)
            if(n%i==0)
                return false;
        return true;
    }
    //////////
    int diagonalPrime(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;++i)
        {
            if(isPrime(nums[i][i]))
                maxi=max(maxi,nums[i][i]);
            if(isPrime(nums[i][n-i-1]))
                maxi=max(maxi,nums[i][n-i-1]);
        }
        
        return maxi;
    }
};