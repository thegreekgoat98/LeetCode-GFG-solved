class Solution {
public:
    int dp[101];
    int solve(int i,string&s,int&n)
    {
        if(dp[i]!=-1)
            return dp[i];
        if(i>=n)
            return dp[i]=1;
        if(s[i]=='0')
            return 0;
        
        int res=solve(i+1,s,n);
        
        if(i+1<n)
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6'))
               res+=solve(i+2,s,n);
               
        return dp[i]=res;
    }
    
    int numDecodings(string s) 
    {
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,s,n);
    }
};
               
// https://www.youtube.com/watch?v=HW-y3gvQTVQ --> CODE STORY WITH MIK