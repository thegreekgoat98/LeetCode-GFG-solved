class Solution {
public:
    bool check(int cap,vector<int>& weights,int days) //predicate function
    {
        int n=weights.size();
        int currSum=0,d=1;
        
        for(int i=0;i<n;++i)
        {
            if(currSum+weights[i]>cap)
            {
                d++;
                currSum=weights[i];
            }
            else
                currSum+=weights[i];
        }
        cout<<d<<" ";
        return d<=days;
    }
    /////////////////////////////
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int res=-1;
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(check(mid,weights,days))
            {
                res=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return res;
    }
};
//Binary Search on Answer