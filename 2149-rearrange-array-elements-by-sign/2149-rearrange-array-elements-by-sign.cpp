class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int>pos;
        vector<int>neg;
        int n=nums.size();
        for(auto it:nums)
        {
            if(it<0)
                neg.push_back(it);
            else
                pos.push_back(it);
        }
        nums.clear();
        for(int i=0;i<n/2;i++)
        {
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        return nums;
    }
};