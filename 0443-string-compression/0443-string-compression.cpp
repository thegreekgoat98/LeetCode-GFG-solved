class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int cnt=1;
        string ans;
        ans+=chars[0];
        
        for(int i=1;i<chars.size();++i)
        {
            if(chars[i]==chars[i-1])
                cnt++;
            else
            {
                if(cnt>1)
                    ans+=to_string(cnt);
                cnt=1;
                ans+=chars[i];
            }
        }
        
        if(cnt>1)
            ans+=to_string(cnt);
        
        for(int i=0;i<ans.size();++i)
            chars[i]=ans[i];
        
        return ans.size();
    }
};