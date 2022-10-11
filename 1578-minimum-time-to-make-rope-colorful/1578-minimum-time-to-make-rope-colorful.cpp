class Solution {
public:
    int minCost(string col, vector<int>& time) 
    {
        int i=0,j=0;
        int n=col.size();
        int ans=0;
        while(i<n && j<n)
        {
            int maxTime=0,curr=0;
            while(j<n && col[i]==col[j])
            {
                maxTime=max(maxTime,time[j]);
                curr+=time[j];
                j++;
            }
            i=j;
            ans+=(curr-maxTime);
        }
        return ans;
    }
};