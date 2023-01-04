class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int,int>mp;
        for(int i:tasks)
            mp[i]++;
        
        int cnt=0;
        for(auto it:mp)
        {
            int freq=it.second;
            if(freq<2)
                return -1;
            if(freq%3==0)
                cnt+=freq/3;
            else
            {
                cnt+=freq/3;
                cnt++;
            }
        }
        
        return cnt;
    }
};