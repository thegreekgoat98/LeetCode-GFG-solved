class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&subsets,vector<int>&currSubset,int i)
    {
        if(i==nums.size())
        {
            subsets.push_back(currSubset);
            return;
        }
        currSubset.push_back(nums[i]);
        solve(nums,subsets,currSubset,i+1);
        currSubset.pop_back();
        solve(nums,subsets,currSubset,i+1);
    }
    /////////////////////////////////////////////////////////////////////////////////////////////
    int subsetXORSum(vector<int>& nums) 
    {
        vector<int>currSubset;
        vector<vector<int>>subsets;
        
        solve(nums,subsets,currSubset,0); //will find all the subsets of the given array store it in an array
        
        int result=0;
        for(vector<int>&subset:subsets)
        {
            int Xor=0;
            for(auto&it:subset)
                Xor^=it;
            result+=Xor;
        }
        return result;
    }
};
//Find all subsets and traverse over the subsets and keep on adding to the result