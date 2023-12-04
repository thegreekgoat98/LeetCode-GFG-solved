class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int n=num.size();
        int curr=-1;
        for(int i=0;i+2<n;++i)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
                curr=max(curr,num[i]-'0');
        }
        
        return (curr==-1) ? "" : string(3,'0'+curr);
    }
};


//https://leetcode.com/problems/largest-3-same-digit-number-in-string/discuss/4359596/Beats-100-C%2B%2BJavaPythonJS-Interview-Solution-Visualized-Too