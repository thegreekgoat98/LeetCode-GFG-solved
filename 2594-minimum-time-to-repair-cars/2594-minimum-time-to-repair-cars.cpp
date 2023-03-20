typedef long long ll;
class Solution {
public:
    bool isPossible(ll time,vector<int>& ranks, int cars)
    {
         ll cnt=0;
        for(int i=0;i<ranks.size();++i)
            cnt+=(sqrt(floor(time/ranks[i])));
            
        return cnt>=cars;
    }
    ///////////////////////////////////////////////////////////////////
    long long repairCars(vector<int>& ranks, int cars) 
    {
        int n=ranks.size();
        ll l=0,r=1e14;
        
        ll ans=0;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(isPossible(mid,ranks,cars))  //predicate function
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
//Binary Search on answer

//https://www.youtube.com/watch?v=nBchKqaVwd8