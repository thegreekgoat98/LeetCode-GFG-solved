class Solution {
public:
    
    bool isPossible(int x,vector<int>&piles,int h)
    {
        long long cnt=0;
        for(auto&it:piles)
        {
            cnt+=(it/x);
            
            if(it%x!=0)
                cnt++;
        }
        
        return cnt<=h;
    }
    
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=0;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(isPossible(mid,piles,h))
            {
                r=mid-1;
                ans=mid;
            }
            else
                l=mid+1;
        }
        
        return ans;
    }
};

// https://www.youtube.com/watch?v=QQcEIxK-snE
//almost coded without seeing the video