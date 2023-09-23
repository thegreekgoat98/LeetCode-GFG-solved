class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size();
        unordered_set<char>S;
        int i=0,j=0;
        int ans=0;
        while(j<n)
        {
            auto x=S.find(s[j]);
            
            if(x==S.end())
            {
                S.insert(s[j]);
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                S.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
    //https://leetcode.com/problems/longest-substring-without-repeating-characters/discuss/376363/CPP-Solution-for-beginners-or-O(n)-time-or-Longest-Substring-without-repeating-characters
};