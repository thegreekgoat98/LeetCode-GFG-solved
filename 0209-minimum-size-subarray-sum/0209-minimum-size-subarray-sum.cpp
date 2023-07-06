class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int i=0,j=0;
        int currSum=0;
        int minLength=INT_MAX;
        
        while(j<n)
        {
            currSum+=nums[j];
            
            while(currSum>=target)
            {
                minLength=min(minLength,j-i+1);
                
                currSum-=nums[i];
                i++;
            }
            j++;
        }
        
        return minLength == INT_MAX ? 0 : minLength;
    }
};