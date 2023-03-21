typedef long long ll;
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        ll ans=0,cnt=0;
        
        for(int&i:nums)
        {
            if(i)
                cnt=0;
            else
                cnt++;
            
            ans+=cnt;
        }
        
        return ans;
    }
};