class Solution {
public:
    int minimumLength(string s) 
    {
        int n=s.size();
        int l=0,r=n-1;
        
        while(l<r)
        {
            if(s[l]==s[r])
            {
                while(s[l]==s[l+1] && l<r)
                    l++;
                while(s[r]==s[r-1] && l<r)
                    r--;
                l++;
                r--;
            }
            else
                break;
        }
        
        int ans=r-l+1;
        if(ans<0)
            return 0;
        return ans;
    }
};

// https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/discuss/4824366/Easy-C%2B%2B-Sol-or-Beats-99.66-users-or-Easiest-Explanation 