class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) 
    {
        int n=arr.size();
        int smallest=arr[0][0];
        int biggest=arr[0].back();
        int ans=INT_MIN;
        
        for(int i=1;i<n;++i)
        {
            ans=max(ans,max(abs(biggest-arr[i].front()),abs(arr[i].back()-smallest)));
            biggest=max(biggest,arr[i].back());
            smallest=min(smallest, arr[i].front());
        }
        return ans;
    }
};


// https://www.youtube.com/watch?v=OO6i7g3it4Q --> just watched the explanation and coded it.