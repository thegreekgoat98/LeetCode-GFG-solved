//https://www.youtube.com/watch?v=K6WCB86EVyQ
class SummaryRanges {
public:
    set<int>S;
    SummaryRanges() {
        
    }
    
    void addNum(int value) 
    {
        S.insert(value);
    }
    
    vector<vector<int>> getIntervals() 
    {
        vector<vector<int>>ans;
        int start=-1,end=-1;
        
        for(auto&ele:S)
        {
            if(start==-1)
                start=end=ele;
            else if(ele==end+1)
                end=ele;
            else
            {
                ans.push_back({start,end});
                start=ele;
                end=ele;
                
            }
        }
        
        if(start!=-1)
            ans.push_back({start,end});
        
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */