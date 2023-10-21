class Solution {
public:
    bool check(int day,vector<int>& bloomDay, int m, int k)
    {
        int cnt=0;
        int curr=0;
        for(int i=0;i<bloomDay.size();++i)
        {
            if(bloomDay[i]<=day)
                curr++;
            else
                curr=0;
            
            if(curr==k)
            {
                cnt++;
                curr=0;
            }
                
        }
        return cnt>=m;
    }
    ///////////////////////////////
    int minDays(vector<int>& bloomDay, int m, int k)
    {
        // if((m*k)>bloomDay.size())
        //     return -1;
        
        int res=-1;
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(check(mid,bloomDay,m,k))
            {
                res=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        
        return res;
    }
};