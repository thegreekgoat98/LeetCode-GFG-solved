class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<long long>st;
        for(string str:tokens)
        {
            if(st.empty() || (str!="+" && str!="-" && str!="*" && str!="/"))
                st.push(stoi(str));
            else
            {
                if(str=="+" || str=="-" || str=="*" || str=="/")
                {
                    
                    long long a=st.top();
                    st.pop();
                    long long b=st.top();
                    st.pop();
                    
                    if(str=="+")
                        st.push(a+b); 
                    if(str=="-")
                        st.push(b-a);
                    if(str=="*")
                        st.push(a*b);
                    if(str=="/")
                        st.push(b/a);   
                }
            }
        }
        
        return st.top();
    }
};