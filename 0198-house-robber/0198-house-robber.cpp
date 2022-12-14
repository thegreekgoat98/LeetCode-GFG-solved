class Solution {
public:
    int rob(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>dp(n); //in dp array, each index i represents, how much money can be robbed upto that index i.
        dp[0]=arr[0]; //upto first index, you only have one option that is the first index itself
        if(n>=2)
            dp[1]=max(arr[1],arr[0]);//upto second index, you have 2 options, either first index's or second index's itself, you will obviously choose maximum
        
        for(int i=2;i<n;++i) //now for each index, you can either choose either upto its last index, or the index itself and previous non adjacant element, i.e., i-2.
            dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
        
        return dp[n-1];
    }
};