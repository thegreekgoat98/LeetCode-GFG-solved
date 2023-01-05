class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b) //comporator function
    {
        return a[1]<b[1];
    }
    /////////////
    int findMinArrowShots(vector<vector<int>>& points)
    {
        sort(points.begin(),points.end(),cmp); //sorting according to ascending order of endpoints
        
        int noOfArrowRequired=1;
        int endPoint=points[0][1];
        for(int i=1;i<points.size();++i)
        {
            if(points[i][0]<endPoint)
                continue;
            else if(points[i][0]>endPoint)
            {
                endPoint=points[i][1];
                noOfArrowRequired++;
            }
        }
        
        return noOfArrowRequired;
    }
};