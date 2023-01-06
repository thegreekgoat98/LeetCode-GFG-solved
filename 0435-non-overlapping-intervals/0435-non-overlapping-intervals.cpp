class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        return a[1]<b[1]; //sorting according to ascending order of endpoints
    }
    /////////
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end(),cmp);
        
        int cnt=0;
        int prev=intervals[0][1];
        for(int i=1;i<intervals.size();++i)
        {
            if(intervals[i][0]<prev)
                cnt++;
            else
                prev=intervals[i][1];
        }
        
        return cnt;
    }
};