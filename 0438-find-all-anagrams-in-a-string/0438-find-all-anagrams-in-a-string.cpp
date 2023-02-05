class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n=s.size();
        int k=p.size();
        map<char,int>mp1;
        map<char,int>mp2;
        for(char&ch:p)
            mp1[ch]++;
        vector<int>ans;
        
        int i=0,j=0;
        while(j<n)
        {
            mp2[s[j]]++;
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                if(mp1==mp2)
                    ans.push_back(i);
                
                mp2[s[i]]--;
                if(mp2[s[i]]==0)
                    mp2.erase(s[i]);
                i++;
                j++; 
            }      
        }
        return ans;
    }
};