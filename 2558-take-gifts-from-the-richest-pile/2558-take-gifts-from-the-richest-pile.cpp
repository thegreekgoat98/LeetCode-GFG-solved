class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        long long sum=0;
        priority_queue<int>pq(gifts.begin(),gifts.end());
        
        while(k--)
        {
            int tp=pq.top();
            pq.pop();
            int sq=sqrt(tp);
            pq.push(sq);
        }
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
        
    }
};