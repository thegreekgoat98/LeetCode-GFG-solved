class Solution {
public:
    bool matching(char& a,char& b)
    {
        return (a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}');
    }
    ///////////////////
    bool isValid(string s) 
    {
        stack<char>st;
        for(auto&it:s)
        {
            if(st.empty())
                st.push(it);
            else
            {
                if(matching(st.top(),it))
                    st.pop();
                else
                    st.push(it);
            }
        }
        
        return st.empty();
    }
};