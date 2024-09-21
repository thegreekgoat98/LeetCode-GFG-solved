class Solution {
public:
    vector<int>ans;
    void dfs(int i, int n)
    {
        if(i>n)
            return;
        
        ans.push_back(i);
        
        for(int k=0;k<10;++k)
            dfs(i*10+k,n);
    }
    /////////////////////////////////
    vector<int> lexicalOrder(int n) 
    {
        for(int i=1;i<10;++i)
            dfs(i,n);
        return ans;
    }
};