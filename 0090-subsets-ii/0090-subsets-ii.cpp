class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&nums,vector<int>&currSubset,int currInd)
    {
        if(currInd==nums.size())
        {
            result.push_back(currSubset);
            return;
        }
        //pick
        currSubset.push_back(nums[currInd]);
        solve(nums,currSubset,currInd+1);
        currSubset.pop_back();
        //do not pick
            // skip all consecutive same elements  
        currInd++;
        while(currInd<nums.size() && nums[currInd]==nums[currInd-1])
            currInd++;
        solve(nums,currSubset,currInd);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        solve(nums,temp,0);
        return result;
    }
};
//https://www.youtube.com/watch?v=Vn2v6ajA7U0 - Neetcode -- good explanation