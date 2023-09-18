class Solution {
public:
    bool isPrime(int n) //function to return tell weather a number is prime or not.
    {
        vector<bool>is_prime(n+1,true);
        is_prime[0]=is_prime[1]=false;
        
        for(int i=2;i<=n;++i)
        {
            if(is_prime[i] && (long long)i*i<=n)
            {
                for(int j=i*i;j<=n;j+=i)
                    is_prime[j]=false;
            }
        }
        
        return is_prime[n];
    }
    //////////////////
    int count(int n) //function to return number of set bits
    {
        int cnt=0;
        while(n)
        {
            int x=n&1;
            if(x==1)
                cnt++;
            n>>=1;
        }
        return cnt;
    }
    //////////////////
    int countPrimeSetBits(int left, int right)
    {
        int ans=0;
        for(int i=left;i<=right;++i)
        {
            int countSetBits=count(i); //no of set bits
            if(isPrime(countSetBits)) //if the number is prime or not
                ans++;
        }
        return ans;
    }
};