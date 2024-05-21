class Solution {
public:
    vector<vector<int>>allSubsets;
    void solve(vector<int>&nums,vector<int>&currSubset,int currIndex)
    {
        if(currIndex==nums.size())
        {
            allSubsets.push_back(currSubset);
            return;
        }
        
        //pick
        currSubset.push_back(nums[currIndex]);
        solve(nums,currSubset,currIndex+1);
        currSubset.pop_back();
        //do notpick
        solve(nums,currSubset,currIndex+1);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int>currSubset;
        solve(nums,currSubset,0);
        
        return allSubsets;
        
    }
};