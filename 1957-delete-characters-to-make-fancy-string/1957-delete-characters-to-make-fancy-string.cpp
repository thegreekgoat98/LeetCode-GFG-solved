class Solution {
public:
    string makeFancyString(string s) 
    {
        int n=s.size();
        string res="";
        
        for(int i=0;i<n;)
        {
            char curr=s[i];
            
            int cnt=0;
            while(s[i]==curr)
            {
                cnt++;
                i++;
            }
            if(cnt>2)
                cnt=cnt-(cnt-2);
            
            for(int k=0;k<cnt;++k)
                res+=curr;
            
        }
        
        return res;
    }
};