class Solution {
public:
    static bool cmp(int&num1, int&num2)
    {
        string n1=to_string(num1);
        string n2=to_string(num2);
        
        if(n1+n2>n2+n1)
               return true;
        return false;
    }
    ////////////////////////////
    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(), cmp);
        
        if(nums[0]==0)
            return "0";
        
        string result="";
        for(int&num:nums)
            result+=to_string(num);
        
        return result;
    }
};

//https://www.youtube.com/watch?v=oJyl4fbfpM0