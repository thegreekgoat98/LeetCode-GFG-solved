class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int n, int m) 
    {
        int size=original.size();
        if(n*m!=size)
            return {};
        
        int k=0;
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                ans[i][j]=original[k++];
        
        return ans;
    }
};