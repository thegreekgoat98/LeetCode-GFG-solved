class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        n*=2;
        vector<int>a,b;
        for(int i=0;i<n/2;++i)
            a.push_back(nums[i]);
        for(int i=n/2;i<n;++i)
            b.push_back(nums[i]);
        /////////////////////////////////////////
        vector<int>ans(n);
        int k=0;
        for(int i=0;i<n-1;i+=2)
        {
            ans[i]=a[k];
            ans[i+1]=b[k];
            k++;
        }
        return ans;
        
    }
};