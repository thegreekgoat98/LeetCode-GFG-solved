class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i=1,k=1;
        
        for(;k<nums.size();++k)
            if(nums[k-1]!=nums[k])
                nums[i++]=nums[k];
        
        
        return i;
    }
};