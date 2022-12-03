class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int>mp;
        for(int i:nums)
            if(i%2==0)
                mp[i]++;
        int ans=-1,maxFreq=-1;
        for(auto it:mp)
        {
            if(it.second>maxFreq)
            {
                maxFreq=it.second;
                ans=it.first;
            }
        }
        
        return ans;
    }
};