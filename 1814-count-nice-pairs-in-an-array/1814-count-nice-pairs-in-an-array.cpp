class Solution {
public:
    int mod=1000000007;
    int reverse(int n)
    {
        int rev=0;
        while(n)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        return rev;
    }
    ////////////
    int countNicePairs(vector<int>& nums)
    {
        unordered_map<int,int>mp;
        int cnt=0;
        for(auto&it:nums)
        {
            int rev=reverse(it);
            int diff=it-rev;
            
            if(mp.count(diff))
            {
                cnt+=mp[diff];
                cnt%=mod;
            }
                
            mp[diff]++;
        }
        return cnt;
    }
};