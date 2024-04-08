class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        stack<int>st;
        queue<int>q;
        int n=students.size();
        
        for(int i=0;i<n;++i)
        {
            st.push(sandwiches[n-i-1]);
            q.push(students[i]);
        }
        ////////////////////////////////////
        int couldNotServe=0;
        while(!st.empty())
        {
            if(st.top()==q.front())
            {
                st.pop();
                q.pop();
                couldNotServe=0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                couldNotServe++;
            }
            
            if(couldNotServe == st.size())
                break;
        }
        
        return st.size();
    }
};