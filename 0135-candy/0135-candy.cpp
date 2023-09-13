class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n=ratings.size();
        vector<int>candy(n,1);
        //1st loop-> make sure if the left child has more ratings
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
                candy[i]=1+candy[i-1];
        }
        //2nd loop->make sure if the right child has more ratings
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
                candy[i]=max(candy[i],1+candy[i+1]);
        }
        return accumulate(candy.begin(),candy.end(),0);
        
        
    }
};