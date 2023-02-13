class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) 
    {
        long long ans=0;
        int i=0,j=nums.size()-1;
        
        while(i<=j)
        {
            if(i==j)
            {
                ans+=nums[i];
                return ans;
            }
                
            string a=to_string(nums[i]);
            string b=to_string(nums[j]);
            a+=b;
            int curr=stoi(a);
            ans+=curr;
            i++;
            j--;
        }
        return ans;
    }
};