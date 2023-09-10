class Solution {
public:
    vector<vector<int>>ans;
    int n;
    void solve(int ind,vector<int>&nums,vector<int>&temp,int target)
    {
        if(ind==n)
        {
            if(target==0)
                ans.push_back(temp);
            return;
        }
        if(nums[ind]<=target)//pick
        {
            temp.push_back(nums[ind]);
            solve(ind,nums,temp,target-nums[ind]);
            temp.pop_back();
        }
        solve(ind+1,nums,temp,target); //not pick
    }
    ///////////
    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        n=nums.size();
        vector<int>temp;
        solve(0,nums,temp,target);
        
        return ans;
    }

};