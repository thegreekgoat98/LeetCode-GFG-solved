class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        
        unordered_map<string,int>m;
        string temp="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                m[temp]++;
                temp.clear();
                continue;
            }
            temp=temp+s1[i];   
        }
        m[temp]++;
        temp.clear();
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==' ')
            {
                m[temp]++;
                temp.clear();
                continue;
            }
            temp=temp+s2[i];  
        }
        m[temp]++;
        vector<string>ans;
        for(auto it:m)
        {
            if(it.second==1)
                ans.push_back(it.first);
        }
        return ans;
    }
};