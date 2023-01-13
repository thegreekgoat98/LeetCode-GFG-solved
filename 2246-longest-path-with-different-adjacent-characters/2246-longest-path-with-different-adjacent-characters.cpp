class Solution {
public:
    int result;
    int dfs(int curr,int par,string&s,vector<int>adj[])
    {
        int longest=0,second_longest=0;
        
        for(int&child:adj[curr])
        {
            if(child==par)
                continue;

            int child_longest_length=dfs(child,curr,s,adj);
            
            if(s[child]==s[curr])
                continue;
                    
            if(child_longest_length>second_longest)
                second_longest=child_longest_length;
            if(second_longest>longest)
                swap(longest,second_longest);
        }
        
        int koi_ek_acha=1+max(longest,second_longest);
        int only_root_acha=1;
        int neeche_hi_mil_gaya_answer=1+longest+second_longest;
        
        result=max({result,koi_ek_acha,only_root_acha,neeche_hi_mil_gaya_answer});
        
        return max(koi_ek_acha,only_root_acha);
        
    }
    
    
    int longestPath(vector<int>& parent, string s) 
    {
        int n=parent.size();
        vector<int>adj[n];
        result=0;
        for(int i=1;i<n;++i)
        {
            int u=i;
            int v=parent[i];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        dfs(0,-1,s,adj);
        
        return result;
    }
};


//https://www.youtube.com/watch?v=EA8dP63iVPk ----> VV good smooth explanation