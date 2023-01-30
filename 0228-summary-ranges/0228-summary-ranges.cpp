class Solution {
public:
    string getStr(int first,int last)
    {
        return first==last ? to_string(first) : to_string(first) + "->" + to_string(last);
    }
    ////////////////////////////////////////////////////
    vector<string> summaryRanges(vector<int>& nums) 
    {
        if(nums.size()==0)
            return {};
        
        vector<string>ans;
        int first=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i-1]+1!=nums[i])
            {
                ans.push_back(getStr(first,nums[i-1]));
                first=nums[i];
            }
        }
        ans.push_back(getStr(first,nums.back()));
        return ans;
    }
    
    //https://leetcode.com/problems/summary-ranges/discuss/914271/C%2B%2B-super-simple-and-short-intuitive-solution-faster-than-100
};