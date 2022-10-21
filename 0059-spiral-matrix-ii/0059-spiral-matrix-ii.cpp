class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int k=1;
        vector<vector<int>>mat(n,vector<int>(n,0));
        int top=0,down=n-1;
        int left=0,right=n-1;
        int dir=0;
        
        while(left<=right && top<=down)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;++i)
                    mat[top][i]=k++;
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;++i)
                    mat[i][right]=k++;
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;--i)
                    mat[down][i]=k++;
                down--;
            }
            else //dir==3
            {
                for(int i=down;i>=top;--i)
                    mat[i][left]=k++;
                left++;
            }
            dir=(dir+1)%4;
        }
        
        return mat;
        
    }
};