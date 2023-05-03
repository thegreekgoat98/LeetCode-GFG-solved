class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<vector<int>>ans(2);
        set<int>S1(nums1.begin(),nums1.end());
        set<int>S2(nums2.begin(),nums2.end());
        
        vector<int>temp;
        for(auto&it:S1)
        {
            if(S2.find(it)==S2.end())
                temp.push_back(it);
        }
        ans[0]=temp;
        
        temp.clear();
        
        for(auto&it:S2)
        {
            if(S1.find(it)==S1.end())
                temp.push_back(it);
        }
        ans[1]=temp;
        
        return ans;
    }
    
    //Doing it from my office laptop 
};