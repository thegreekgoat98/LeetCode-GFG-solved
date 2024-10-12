class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        return a[0]<b[0];
    }
    ////////////////////////////////////////////////////
    int minGroups(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end(), cmp);
        priority_queue<int, vector<int>, greater<int>>pq; //min-heap
        
        for(auto&interval: intervals)
        {
            int start=interval[0];
            int end=interval[1];
            
            if(!pq.empty() && start>pq.top())
                pq.pop();
            
            pq.push(end);
        }
        
        return pq.size();
    }
};


/*
1. Custom sort based on left(i)
2. use min heap to satisfy the condition ---> start(current)>end(top of heap)   
        - increase the counter
*/


//https://www.youtube.com/watch?v=aelafJoNaD0  -- codestorywithmik -- bit foggy