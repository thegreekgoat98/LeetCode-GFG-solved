class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        unordered_map<int,int>mp;
        int currSum=0;
        mp[currSum]=1;
        int cnt=0;
        
        for(int i=0;i<nums.size();++i)
        {
            currSum+=nums[i];
            int remSum=currSum-goal;
            auto x=mp.find(remSum);
            
            if(x!=mp.end())
                cnt+=x->second;
            
            mp[currSum]++;
        }
        
        return cnt;
    }
    //https://www.youtube.com/watch?v=20v8zSo2v18 --> KING SUMEET MALIK
};