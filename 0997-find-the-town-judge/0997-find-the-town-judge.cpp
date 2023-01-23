class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int>data(n+1);
        for(auto&it:trust)
        {
            data[it[0]]--;
            data[it[1]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            int x=data[i];
            if(x==n-1)
                return i;
        }
        return -1;
    }
};