class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,long long>mp;
        for(char ch:s)
            mp[ch]++;
        
        priority_queue<pair<long long,char>>pq;
        for(auto it:mp)
            pq.push({it.second,it.first});
        
        string ans="";
        while(!pq.empty())
        {
            auto temp=pq.top();
            long long k=temp.first;
            char ch=temp.second;
            pq.pop();
            
            while(k--)
                ans+=ch;  
        }
        
        return ans;
    }
};