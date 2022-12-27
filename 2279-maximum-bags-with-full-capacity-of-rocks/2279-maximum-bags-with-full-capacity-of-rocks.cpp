class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int addr) 
    {
        vector<int>diff(rocks.size());
        for(int i=0;i<rocks.size();i++)
            diff[i]=capacity[i]-rocks[i];
        
        sort(diff.begin(),diff.end());
        int cnt=0;
        for(int i=0;i<diff.size();i++)
        {
            if(!diff[i])
            {
                cnt++;
                continue;
            }
            if(diff[i]<=addr)
            {
                cnt++;
                addr-=diff[i];
            }
        }
        return cnt;
    }
};