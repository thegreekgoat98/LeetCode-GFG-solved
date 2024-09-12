class Solution {
public:
    bool isConsistent(set<char>&st,string str)
    {
        for(char ch:str)
        {
            if(st.find(ch)==st.end())
                return false;
        }
        return true;
    }
    ////////
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        set<char>st;
        for(auto it:allowed)
            st.insert(it);
        int cnt=0;
        for(string str:words)
        {
            if(isConsistent(st,str))
                cnt++;
        }
        return cnt;
    }
};