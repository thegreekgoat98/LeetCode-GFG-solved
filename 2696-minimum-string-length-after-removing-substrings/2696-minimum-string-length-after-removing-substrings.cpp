class Solution {
public:
    int minLength(string s) 
    {
        stack<char>st;
        
        for(int i=0;i<s.size();++i)
        {
            if(st.empty())
                st.push(s[i]);
            
            else if(st.top()=='A')
            {
                if(s[i]=='B')
                    st.pop();
                else
                    st.push(s[i]);
            }
            
            else if(st.top()=='C')
            {
                if(s[i]=='D')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        
        return st.size();
    }
};