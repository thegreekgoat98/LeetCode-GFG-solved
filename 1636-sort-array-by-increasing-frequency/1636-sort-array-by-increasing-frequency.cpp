class Solution {
public:
    
    
    
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(int i:nums)
            mp[i]++;
        
        sort(nums.begin(),nums.end(),[&](int&a,int&b)
             {
                 return mp[a]==mp[b]?a>b:mp[a]<mp[b];
             });
        //first time used lambda function in the above line
        
        return nums;
            
    }
    //https://leetcode.com/problems/sort-array-by-increasing-frequency/discuss/917795/C%2B%2BPython-Sort -----> Learnt LAMBDA FUNCTIONS in C++ today
};