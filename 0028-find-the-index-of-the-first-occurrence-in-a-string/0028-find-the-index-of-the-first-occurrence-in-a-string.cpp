class Solution {
public:
    //sliding window
    int strStr(string haystack, string needle) 
    {
        int n=haystack.size();
        int k=needle.size();
        int i=0,j=0;
        
        while(j<n)
        {
            if(j-i+1<k)
                j++;
            else
            {
                string str=haystack.substr(i,k);
                if(str==needle)
                    return i;
                i++;
                j++;
            }
        }
        
        return -1;
    }
};