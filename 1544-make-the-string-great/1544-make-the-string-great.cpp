class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>st;
        for(char ch:s)
        {
            if(st.empty())
                st.push(ch);
            else if(abs(st.top()-ch)==32)
                st.pop();
            else
                st.push(ch);
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};