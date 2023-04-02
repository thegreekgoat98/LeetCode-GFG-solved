class Solution {
public:
    bool isPossible(int &x,long long &success,int &a)
    {
        long long b=(long long)x*(long long)a;
        if(b>=success)
            return true;
        return false;
    }
    
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        int n=spells.size();
        int m=potions.size();
        
        vector<int>ans(n);
        sort(potions.begin(),potions.end());
        
        for(int i=0;i<n;++i)
        {
            int l=0,r=potions.size()-1;
            int res=m;
            
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                
                if(isPossible(potions[mid],success,spells[i]))
                {
                    res=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            
            ans[i]=potions.size()-res;
        }
        
        return ans;
    }
};