class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int>ans;
        deque<int>dq;
        
        for(int i=0;i<nums.size();++i)
        {
            if(!dq.empty() && dq.front()==i-k)//check for out of bound
                dq.pop_front();
            
            while(!dq.empty() && nums[i]>nums[dq.back()]) //we are maintaining a decreasing fashion inside the deque
                dq.pop_back();
            
            dq.push_back(i);
            
            if(k<=i+1) //if window size is hitting k
                ans.push_back(nums[dq.front()]);
        }
        
        return ans;
    }
    //sliding window technique::: STRIVER's VIDEO
};