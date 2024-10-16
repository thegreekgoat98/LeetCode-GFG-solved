class Solution {
public:
    string longestDiverseString(int a, int b, int c) 
    {
        priority_queue<pair<int,char>>pq;
        if(a>0)
            pq.push({a,'a'});
        if(b>0)
            pq.push({b,'b'});
        if(c>0)
            pq.push({c,'c'});
        
        
        string res="";
        while(!pq.empty())
        {
            int currCount=pq.top().first;
            int currChar=pq.top().second;
            pq.pop();
            
            if(res.size()>=2 && res[res.size()-1]==currChar && res[res.size()-2]==currChar)
            {
                //we cant use currChar, check for next largest frequency
                if(pq.empty())
                    break;
                
                int nextCount=pq.top().first;
                int nextChar=pq.top().second;
                pq.pop();
                
                res+=nextChar;
                nextCount--;
                if(nextCount>0)
                    pq.push({nextCount,nextChar});
            }
            else
            {
                res+=currChar;
                currCount--;
            }
            
            //////////////////////////////////////////////////////////////////////////////////////
            
            if(currCount>0)
                pq.push({currCount,currChar});
            
        }
        
        return res;
    }
};
// easy problem but lots of if-else conditions making it confusing - codestorywithMIK - https://www.youtube.com/watch?v=tGzgghQEDdA