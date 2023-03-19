typedef pair<int,int> pi;
class Solution {
public:
    long long findScore(vector<int>& nums) 
    {
        int n=nums.size();
        vector<bool>vis(n,false);
        priority_queue<pi,vector<pi>,greater<pi>>pq; //min-heap
        
        for(int i=0;i<n;++i)
            pq.push({nums[i],i});
            
        long long score=0;
        int marked=0;
        while(!pq.empty() || marked<n)
        {
            int ele=pq.top().first;
            int pos=pq.top().second;
            pq.pop();
            
            
            if(vis[pos]==false)
            {
                score+=nums[pos];
                int prev=pos-1;
                int next=pos+1;
                if(prev>=0)
                    vis[prev]=true;
                if(next<n)
                    vis[next]=true;
                marked+=3;
            }
            
        }
        
        return score;
    }
};