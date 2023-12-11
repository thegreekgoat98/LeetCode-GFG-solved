class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto&it:arr)
            mp[it]++;
        for(auto&it:mp)
            if(it.second>n/4)
                return it.first;
        return -1;
    }
};