class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int i=0,j=1;
        int ans=-1;
        
        while(j<nums.size())
        {
            if(nums[i]<nums[j])
                ans=max(ans,nums[j]-nums[i]);
            else
                i=j;
            
            
            j++;
        }
        return ans;
    }
};
/* Two pointer approach:
    T.C.-O(N)
    S.C.-O(1)*/