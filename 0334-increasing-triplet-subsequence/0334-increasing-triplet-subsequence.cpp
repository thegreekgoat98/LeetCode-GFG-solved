class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int n=nums.size();
        //building leftMin array
        vector<int>leftMin(n);
        leftMin[0]=nums[0];
        for(int i=1;i<n;++i)
            leftMin[i]=min(leftMin[i-1],nums[i]);
        
        //building rightMax array
        vector<int>rightMax(n);
        rightMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            rightMax[i]=max(rightMax[i+1],nums[i]);
        
        //tarversing through arrays to find the answer
        
        for(int i=1;i<n-1;++i)
            if(nums[i]>leftMin[i-1] && nums[i]<rightMax[i+1])
                return true;
        
        return false;
    }
};