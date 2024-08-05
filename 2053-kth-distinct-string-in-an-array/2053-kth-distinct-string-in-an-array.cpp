class Solution {
public:
    string kthDistinct(vector<string>& arr, int k)
    {
        unordered_map<string,int>mp;
        for(string&str:arr)
            mp[str]++;
        
        queue<string>q;
       for(int i=0;i<arr.size();++i)
           if(mp[arr[i]]==1)
               q.push(arr[i]);
        
        if(k>q.size())
            return "";
        k--;
        while(k--)
            q.pop();
        
        return q.front();
    }
};