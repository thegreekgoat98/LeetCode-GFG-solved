class Solution {
public:
    int maxOperations(vector<int>& nums) 
    {
        int cnt=1;
        int x=nums[0]+nums[1];
        // bool flag=true;
        for(int i=2;i<nums.size()-1;i+=2)
        {
            if(nums[i]+nums[i+1]==x)
                cnt++;
            else
                break;
        }
            
        
        return cnt;
    }
};