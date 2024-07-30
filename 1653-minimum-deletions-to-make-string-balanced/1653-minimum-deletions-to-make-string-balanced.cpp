class Solution {
public:
    int minimumDeletions(string s) 
    {
        int n=s.size();
        int cnt=0;
        stack<char>st;
        
        for(int i=n-1;i>=0;--i)
        {
            if(!st.empty() && s[i]>st.top())
            {
                cnt++;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        
        return cnt;
    }
};

// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/discuss/935373/C%2B%2B-Stack-O(n)-solution    ---- understood the logic from here