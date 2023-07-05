class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int i=0,j=0;
        int countZero=0;
        int maxLength=0;
        int n=nums.size();
        
        while(j<n)
        {
            if(nums[j]==0)
                countZero++;
            
            while(countZero>1)
            {
                if(nums[i]==0)
                    countZero--;
                i++;
            }
            maxLength=max(maxLength,j-i);
            j++;
        }
        
        return maxLength;
    }
    // https://www.youtube.com/watch?v=SQ8tY9nxeZU --> KING
};