class Solution {
public:
    int n;
    // vector<vector<int>>dp(101,vector<int>(201,-1)); 
    int dp[101][201];
    int mod=1e9+7;
    //////////////////////
    int solve(vector<int>& locations,int curr_city,int finish,int fuel)
    {
        if(fuel<0)
            return 0;
        
        if(dp[curr_city][fuel]!=-1)
            return dp[curr_city][fuel];
        
        
        int ans=0;
        
        if(curr_city==finish)
            ans+=1;
        
        for(int nextCity=0;nextCity<n;++nextCity)
        {
            
            if(nextCity!=curr_city)
            {
                int remaining_fuel=fuel-abs(locations[nextCity]-locations[curr_city]);
                ans=(ans+solve(locations,nextCity,finish,remaining_fuel))%mod;
            }  
        }
        
        dp[curr_city][fuel]=ans;
        
        return dp[curr_city][fuel];
    }
    //////////////////
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) 
    {
        n=locations.size();
        memset(dp,-1,sizeof(dp));
        return solve(locations,start,finish,fuel);
    }
};
//THE LEGEND MIK--->https://www.youtube.com/watch?v=qppd8vx0vK4