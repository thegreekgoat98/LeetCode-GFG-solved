class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        
        int ans=INT_MIN;
        for(int i=0;i<points.size()-1;++i)
        {
            unordered_map<double,int>mp;
            for(int j=i+1;j<points.size();++j)
            {
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                
                if(x1==x2)
                    mp[10002]++; // lets think 10002 as infinity
                else
                {
                    double slope=(double)(y2-y1)/(x2-x1);
                    mp[slope]++;
                }
                
                for(auto it:mp)
                    ans=max(ans,it.second+1); 
            }
        }
        return max(1,ans);  //atleast 1 would be the answer
    }
};