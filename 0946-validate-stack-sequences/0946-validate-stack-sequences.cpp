class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int>st;
        int n=pushed.size();
        int i=0,j=0;
        
        while(i<n && j<n)
        {
            st.push(pushed[i]);
            i++;
            
            while(!st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
        }
        
        return st.empty();
    }
    
    //https://www.youtube.com/watch?v=HEh7EtNSXtg LEGEND
};