class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInt)
    {
        vector<vector<int>>ans;
        for(auto&it:intervals)
        {
            if(newInt[0]>it[1])
                ans.push_back(it);
            else if(it[0]>newInt[1])
            {
                ans.push_back(newInt);
                newInt=it;
            }
            else
            {
                newInt[0]=min(it[0],newInt[0]);
                newInt[1]=max(it[1],newInt[1]);
            }
        }
        ans.push_back(newInt);
        
        return ans;
    }
};