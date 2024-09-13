class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        int n=arr.size();
        vector<long long>pf_xor(n);
        pf_xor[0]=arr[0];
        
        for(int i=1;i<n;++i)
            pf_xor[i]=pf_xor[i-1]^arr[i];
        
        vector<int>ans(queries.size());
        
        for(int i=0;i<queries.size();++i)
        {
            int u=queries[i][0];
            int v=queries[i][1];
            if(u!=0)
                ans[i]=pf_xor[v]^pf_xor[u-1];
            else
                ans[i]=pf_xor[v];
        }
        
        return ans;
    }
};

//xor[u,v] = pf_xor[v] ^ pf_xor[u-1]  (u!=0)
//xor[u,v] = pf_xor[v]  (u==0)