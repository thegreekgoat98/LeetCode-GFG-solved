class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) 
    {
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;++i)
        {
            if(mp[arr[i]]==1)
                ans.push_back(arr[i]);
            mp[arr[i]]++;
        }
        return ans;
    }
};