class Solution {
public:
    int findTheWinner(int n, int k)
    {
        vector<int>arr;
        for(int i=1;i<=n;++i)
            arr.push_back(i);
        
        int i=0; //becuz game will start from first index 
        while(arr.size()>1)
        {
            int idx=(i+k-1)%arr.size();
            arr.erase(arr.begin()+idx); //remove that number
            //'erase' will remove that index from the array. 
            i=idx;
        }
        return arr[0];
    }
};
//TC - O(n^2)
//SC - O(n)

//https://www.youtube.com/watch?v=lq3RMxKST-Y  -- Brilliant