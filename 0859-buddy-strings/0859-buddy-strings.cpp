class Solution {
public:
    bool checkFrequency(string& s)
    {
        int arr[26]={0};
        for(char&ch:s)
        {
            arr[ch-'a']++;
        
            if(arr[ch-'a']>1)
                return true;
        }
        
        return false;
            
    }
    /////////////
    bool buddyStrings(string s, string goal) 
    {
        if(s.length()!=goal.length())
            return false;
        
        if(s==goal)
            return checkFrequency(s);
        
        vector<int>v;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]!=goal[i])
                v.push_back(i);
        }
        
        if(v.size()!=2)
            return false;
        
        swap(s[v[0]],s[v[1]]);
        
        return s==goal;
    }
};