class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int actual=1;
        int i=0;
        
        while(i<arr.size() && k>0)
        {
            if(actual==arr[i])
                i++;
            else
                k--;
            
            actual++;
        }
        
        while(k--)
            actual++;
        
        return actual-1;
    }
};