class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        //keeping all minimum sum from top to bottom column of every column in the first row 
        for(int i=n-2;i>=0;--i)
        {
            for(int j=0;j<m;++j)
            {
                if(j>0 && j<m-1)
                    matrix[i][j]+=min({matrix[i+1][j-1],matrix[i+1][j],matrix[i+1][j+1]});
                else if(j==m-1)
                    matrix[i][j]+=min({matrix[i+1][j-1],matrix[i+1][j]});
                else //j==0
                    matrix[i][j]+=min({matrix[i+1][j],matrix[i+1][j+1]});
            }
        }
        /////////////////
        //from the stored minimum sums in first row, finding the minimum sum and returning it
        int ans=INT_MAX;
        for(int j=0;j<m;++j)
            ans=min(ans,matrix[0][j]);
        
        return ans;
    }
};
//https://www.youtube.com/watch?v=bz69jX0NUTM