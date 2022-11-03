class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
        unordered_map<string,int>mp;
        int cnt=0;
        for(string str:words)
        {  
            string rev=str;
            reverse(rev.begin(),rev.end());
            auto x=mp.find(rev);
            if(x!=mp.end())
            {
                cnt+=4;
                mp[rev]--;
                if(mp[rev]==0)
                    mp.erase(rev);
            }
            else
                mp[str]++;
        }
        ///////
        for(auto it:mp)
        {
            if(it.first[0]==it.first[1])
            {
                cnt+=2;
                break;
            }
        }
        return cnt;
    }
};