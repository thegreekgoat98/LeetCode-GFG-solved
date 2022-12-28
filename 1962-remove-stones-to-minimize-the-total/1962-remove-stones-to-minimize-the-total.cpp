class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) 
    {
        priority_queue<int>pq(piles.begin(),piles.end());
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            x-=x/2;
            pq.push(x);
        }
        int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};