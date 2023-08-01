class Solution {
public:
    vector<vector<int>>ans;
    
    void dfs(int n,int k,vector<int>&temp,int curr)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=curr;i<=n;++i)
        {
            temp.push_back(i);
            dfs(n,k,temp,i+1);
            temp.pop_back();
        }
    }
    /////////////////////////////////////////////
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int>temp;
        dfs(n,k,temp,1);
        
        return ans;
    }
};