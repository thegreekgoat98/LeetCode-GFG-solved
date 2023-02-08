class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        // lets reverse the problem, you are at last index, can you reach the first index?
        int n=nums.size();
        int ind=n-1; //stores kahan pahunchna hai hame
        for(int i=n-1;i>=0;--i)
        {
            if(nums[i]+i>=ind)
                ind=i;
        }
        
        return ind==0;
    }
    //https://www.youtube.com/watch?v=EgMPjWliYGY -- the best explanation
};
