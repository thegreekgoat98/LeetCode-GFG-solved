class Solution {
public:
    int findDigSum(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) 
    {
        int arrSum=accumulate(nums.begin(),nums.end(),0);
        
        int digSum=0;
        for(int i=0;i<nums.size();++i)
            digSum+=findDigSum(nums[i]);
        
        return abs(arrSum-digSum);
    }
};