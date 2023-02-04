class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int k=s1.size();
        int n=s2.size();
        sort(s1.begin(),s1.end());
        
        int i=0,j=0;
        while(j<n)
        {
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                string str=s2.substr(i,k);
                sort(str.begin(),str.end());
                if(s1==str)
                    return true;
                i++;
                j++;
            }
        }
        return false;
    }
};