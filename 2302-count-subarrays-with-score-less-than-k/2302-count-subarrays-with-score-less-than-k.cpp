class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) 
    {
        long long ans=0;
        
        int i=0,j=0;
        long long currentScore=0,currentSum=0;
        int n=nums.size();
        
        while(j<n)
        {
            currentSum+=nums[j];
            currentScore=currentSum*(j-i+1);
            
            while(currentScore>=k && i<=j)
            {
                currentSum-=nums[i];
                i++;
                currentScore=currentSum*(j-i+1);
            }
            ans+=(j-i+1);
            j++;
        }
        
        return ans;
    }
};