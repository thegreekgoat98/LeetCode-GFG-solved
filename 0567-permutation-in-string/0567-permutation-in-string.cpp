class Solution {
public:
    bool checkInclusion(string str1, string str2) 
    {
        int k=str1.size();
        sort(str1.begin(),str1.end());
        
        int i=0,j=0;
        int n=str2.size();
        while(j<n)
        {
            if(j-i+1<k)
                j++;
            else
            {
                string str=str2.substr(i,k);
                sort(str.begin(),str.end());
                if(str==str1)
                    return true;
                i++;
                j++;
            }
        }
        return false;
    }
};
//TC --> O(nlogn) + O(nlog(logn))