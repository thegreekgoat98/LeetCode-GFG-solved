class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]<b[0];
    }
    ///////////
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),cmp);
        vector<int>temp=intervals[0];
        
        for(int i=1;i<intervals.size();++i)
        {
            if(temp[0]<intervals[i][0] && temp[1]>intervals[i][1])
                continue;
            else if(temp[1]>=intervals[i][0])
            {
                temp[1]=intervals[i][1];
            }
            else if(temp[1]<intervals[i][0])
            {
                ans.push_back(temp);
                temp=intervals[i];
            }
        }
        ans.push_back(temp);
        
        return ans;
    }
};