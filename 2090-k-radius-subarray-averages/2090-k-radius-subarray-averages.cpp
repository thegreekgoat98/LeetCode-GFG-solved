class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        int n=nums.size();
        k=2*k+1;
        vector<int>temp;
        int i=0,j=0;
        long long sum=0;
        
        while(j<n)
        {
            sum+=nums[j];
            
            if(j-i+1<k)
                j++;
            else
            {
                long long avg=sum/k;
                temp.push_back(avg);
                sum-=nums[i];
                
                i++;
                j++;
            }
        }
        /////////////////////////////
        k--;
        k/=2;
        vector<int>ans(n,-1);
        j=k;
        int p=0;
        for(int i=j;i<n-k;++i)
        {
            ans[i]=temp[p++];
        }
        
        return ans;
    }
};