class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        int ind=n-1;
        for(int i=n-2;i>=0;--i)
        {
            if(nums[i]+i>=ind)
            {
                ind=i;
            }
        }
        return ind==0;
    }
    //https://www.youtube.com/watch?v=EgMPjWliYGY -- the best explanation
};