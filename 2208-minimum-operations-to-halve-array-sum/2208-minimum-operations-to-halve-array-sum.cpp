class Solution {
public:
    int halveArray(vector<int>& nums) 
    {
        double sum=accumulate(nums.begin(),nums.end(),0.0);
        double half=sum/2.0;
        priority_queue<double>pq; //max-heap
        for(int i:nums)
            pq.push((double)i);
        /////////////////////////////
        int cnt=0;
        while(sum>half)
        {
            double tp=pq.top();
            pq.pop();
            double h=tp/2.0;
            sum-=h;
            pq.push(h);
            cnt++;
        }
        return cnt;
        
    }
};