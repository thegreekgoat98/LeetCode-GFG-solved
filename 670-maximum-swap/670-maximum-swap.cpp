class Solution {
public:
    int findMax(string&str,int i)
    {
        int max=i;
        for(int k=i;k<str.size();++k)
            if(str[max]<=str[k])
                max=k;
        return max;
    }
    //////////
    int maximumSwap(int num) 
    {
        string s=to_string(num);
        string s1=s;
        for(int i=0;i<s.length();++i)
        {
            int ind=findMax(s,i); //find max from i to n
            swap(s[ind],s[i]);
            if(s!=s1)
                break;
        }
        int ans=stoi(s);
        return ans;
    }
    //https://leetcode.com/problems/maximum-swap/discuss/688719/C%2B%2B-simple-solution-(100-faster)-with-explanations
    //very nice explanation
};