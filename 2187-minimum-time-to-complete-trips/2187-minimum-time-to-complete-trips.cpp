class Solution {
public:
    
    bool isPossible(long long givenTime,vector<int>&time,int totalTrips)
    {
        long long cnt=0;
        for(auto&it:time)
            cnt+=(givenTime/it);
        
        return cnt>=totalTrips;
    }
    ///////////////////////////////////////////////////
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        int n=time.size();
        long long l=1;
        long long r=(long long)*min_element(time.begin(),time.end())*totalTrips;
        long long ans=0;
        
        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            if(isPossible(mid,time,totalTrips))
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

//https://www.youtube.com/watch?v=tUCVupA0lAc