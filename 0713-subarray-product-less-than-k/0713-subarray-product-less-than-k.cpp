class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k==0)
            return 0;
        
        int n=nums.size();
        
        int i=0,j=0;
        int currProd=1;
        int ans=0;
        
        while(j<n)
        {
            currProd*=nums[j];
            
            while(currProd>=k && i<=j)
            {
                currProd/=nums[i];
                i++;
            }
            
            ans+=(j-i+1);
            j++;
        }
        
        return ans;
    }
    //https://www.youtube.com/watch?v=L_yBEqBAZzs --> THE QUEEN
};