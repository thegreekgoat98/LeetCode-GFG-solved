class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) 
    {
        long long ans=0;
        priority_queue<int>pq(nums.begin(),nums.end()); //max-heap
        
        while(k--)
        {
            int tp=pq.top();
            pq.pop();
            ans+=tp;
            int nw=(tp+2)/3;
            pq.push(nw);
        }
        
        return ans;
    }
};