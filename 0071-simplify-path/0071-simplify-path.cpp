class Solution {
public:
    string simplifyPath(string path) 
    {
        string token="";
        stringstream ss(path);
        stack<string>st;
        
        while(getline(ss,token,'/'))
        {
            if(token=="." || token=="")
                continue;
            
            if(token!="..")
                st.push(token);
            else if(!st.empty())
                st.pop();
        }
        
        
        if(st.empty())
            return "/";
        
        string ans="";
        while(!st.empty())
        {
            ans="/"+st.top()+ans;
            st.pop();
        }
        
        return ans;
    }
    
    //https://www.youtube.com/watch?v=ZV-Hi1e1KL8 -- LEGEND
    // BUT I HAVE TO LEARN THAT TOKENISATION PART IN THE VIDEO BETTER
};