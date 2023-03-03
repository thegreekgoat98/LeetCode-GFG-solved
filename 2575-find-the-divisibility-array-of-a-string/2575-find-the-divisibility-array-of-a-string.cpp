class Solution {
public:
    vector<int> divisibilityArray(string word, int m) 
    {
        vector<int>ans(word.size(),0);
        long long num=0;
        
        for(int i=0;i<word.size();++i)
        {
            num=num*10+(word[i]-'0');
            int rem=num%m;
            num=rem;
            if(rem==0)
                ans[i]=1;
        }
        return ans;
    }
};
// https://www.youtube.com/watch?v=DYTErY-poAE