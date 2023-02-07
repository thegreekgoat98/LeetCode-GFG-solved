class Solution {
public:
    //longest subarray having 2 elements in it any number of times
    int totalFruit(vector<int>& fruits) 
    {
        int n=fruits.size();
        int k=2;
        int ans=INT_MIN;
        unordered_map<int,int>mp;
        int i=0,j=0;
        while(j<n)
        {
            mp[fruits[j]]++;
            if(mp.size()>k)
            {
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};