class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());  
        set<vector<int>>S;
        for(int i=0;i<n;++i)
        {
            int curr=nums[i];
            int l=i+1;
            int r=n-1;
            
            while(l<r)
            {
                int currSum=curr+nums[l]+nums[r];
                if(currSum<0)
                    l++;
                else if(currSum>0)
                    r--;
                else
                {
                    S.insert({curr,nums[l],nums[r]});
                    l++;
                    r--;
                }
            }
        }
        
        vector<vector<int>>ans(S.begin(),S.end());
        return ans;
    }
};
//TC - O(n*logn)
//SC - O(n)