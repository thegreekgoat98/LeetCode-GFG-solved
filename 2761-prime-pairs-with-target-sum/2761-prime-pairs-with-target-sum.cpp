class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) 
    {
        vector<vector<int>>v;
        if(n==1)return v;
        vector<int>prime(n+1,true);
        prime[0]=0;
        prime[1]=0;
        
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for (int j = i * i; j <= n; j += i) {
                    prime[j]=0;
                }
            }
        }
        
        for(int i=2;i<=n/2;i++)
        {
            if(prime[i] && prime[n-i])
            {
                vector<int>temp;
                temp.push_back(i);
                temp.push_back(n-i);
                v.push_back(temp);
            }
        }
        return v;
    }
};