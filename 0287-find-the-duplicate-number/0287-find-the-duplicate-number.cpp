class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        ///////////////////
        int ans=0;
        for(auto it:m)
        {
            if(it.second>1)
            {
                ans=it.first;
                break;
            }
                
        }
        return ans;
    }
};