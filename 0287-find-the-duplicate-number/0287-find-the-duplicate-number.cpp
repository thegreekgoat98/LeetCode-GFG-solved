class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int slow=nums[0];
        int fast=nums[0];
        
        slow=nums[slow];
        fast=nums[nums[fast]];
        
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        
        slow=nums[0];
        
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        
        return slow; //or can return fast
    }
    
    //https://www.youtube.com/watch?v=49HrEGt6D2s -- Very good problem.
//got linked list idea too.
};