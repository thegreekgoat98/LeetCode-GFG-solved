class Solution {
public:
    int maximizeGreatness(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int i=0,j=0;
        int cnt=0;
        while(j<n)
        {
            if(nums[j]>nums[i])
            {
                cnt++;
                i++;
                j++;
            }
            else
                j++;
        }
        
        return cnt;
    }
};