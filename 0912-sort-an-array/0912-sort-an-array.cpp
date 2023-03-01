class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end()); //min heap
        
        while(!pq.empty())
        {
            ans.emplace_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};