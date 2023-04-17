class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool>arr(candies.size());
        int maxi=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();++i)
        {
            if((candies[i]+extraCandies)>=maxi)
                arr[i]=true;
            else
                arr[i]=false;
        }
        return arr;
    }
};