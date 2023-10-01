class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        
        for(auto&it:nums)
            mp[it]++;
        ///////////////////////////
        int cnt=0;
        for(auto&it:mp)
        {
            int freq=it.second;
            if(freq==1)
                return -1;
            if(freq%3==0)
                cnt+=(freq/3);
            else
                cnt+=(freq/3)+1;
        }
        return cnt;
    }
};