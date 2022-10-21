class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>ans;
        
        int top=0,down=n-1;
        int left=0,right=m-1;
        int dir=0;
        while(left<=right && top<=down)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;++i)
                    ans.push_back(mat[top][i]);
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;++i)
                    ans.push_back(mat[i][right]);
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;--i)
                    ans.push_back(mat[down][i]);
                down--;
            }
            else //dir==3
            {
                for(int i=down;i>=top;--i)
                    ans.push_back(mat[i][left]);
                left++;
            }
            dir=(dir+1)%4;
        }
        
        return ans;
    }
};