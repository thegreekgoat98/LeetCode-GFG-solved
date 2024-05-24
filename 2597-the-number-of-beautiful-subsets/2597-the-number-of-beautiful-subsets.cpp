class Solution {
public:
    int cnt=0;
    void solve(int currInd,vector<int>&nums,unordered_map<int,int>&mp,int k)
    {
        //base case
        if(currInd==nums.size())
        {
            cnt++;
            return;
        }
        
        //pick
        if(!mp[nums[currInd]-k] && !mp[nums[currInd]+k])
        {
            mp[nums[currInd]]++;
            solve(currInd+1,nums,mp,k);
            mp[nums[currInd]]--;
        }
        //not pick
        solve(currInd+1,nums,mp,k);
    }
    int beautifulSubsets(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        solve(0,nums,mp,k);
        
        return cnt-1; // -1 to exclude empty set
    }
};

//https://www.youtube.com/watch?v=RoEzdG1bB9s - smooth as cream