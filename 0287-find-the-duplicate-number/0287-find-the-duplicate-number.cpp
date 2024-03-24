class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int slow=nums[0];
        int fast=nums[0];
        
        slow=nums[slow];
        fast=nums[nums[fast]];
        
        cout<<"slow: "<<slow<<endl;
        cout<<"fast: "<<fast<<endl;
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            cout<<"slow: "<<slow<<endl;
            cout<<"fast: "<<fast<<endl;
        }
        
        slow=nums[0];
        
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        
        return fast;  //or slow
    }
};

//https://www.youtube.com/watch?v=49HrEGt6D2s