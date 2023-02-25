class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int ans=0;
        int n=prices.size();
        int i=0,j=0;
        while(j<n)
        {
            if(prices[i]<prices[j])
            {
                int curr=prices[j]-prices[i];
                ans=max(ans,curr);
            }
            else //if prices[r]<prices[l]
                i=j;
            
            j++;
        }
        return ans;
    }
};
// https://www.youtube.com/watch?v=1pkOgXD63yU --NEETCODE