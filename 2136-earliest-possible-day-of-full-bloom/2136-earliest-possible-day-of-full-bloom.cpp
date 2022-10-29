class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        return a.second>b.second;
    }
    ///////
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) 
    {
        int n=plantTime.size();
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;++i)
            arr[i]={plantTime[i],growTime[i]};
         
        sort(arr.begin(),arr.end(),cmp);
        
        int ans=0;
        int start=0;
        for(int i=0;i<n;++i)
        {
            start+=arr[i].first;
            ans=max(ans,start+arr[i].second);
        }
        
        return ans;
    }
};