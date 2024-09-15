class Solution {
public:
    int findTheLongestSubstring(string s) 
    {
        unordered_map<string,int>mp; //<state, index last it was seen>
        string currState="00000";
        mp[currState]=-1;
        vector<int>state(5,0);//a e i o u
        
        int cnt=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='a')
                state[0]=(state[0]+1)%2;
            else if(s[i]=='e')
                state[1]=(state[1]+1)%2;
            else if(s[i]=='i')
                state[2]=(state[2]+1)%2;
            else if(s[i]=='o')
                state[3]=(state[3]+1)%2;
            else if(s[i]=='u')
                state[4]=(state[4]+1)%2;
            
            currState="";
            for(int k=0;k<5;++k)
                currState+=to_string(state[k]);
            
            auto x=mp.find(currState);
            if(x!=mp.end()) //map ke ander hai
                cnt=max(cnt,i-mp[currState]);
            else
                mp[currState]=i;
        }
        
        return cnt;
    }
};

//https://www.youtube.com/watch?v=6Xf5LfM-ciI - codestorywithMIK
// This question is similar to "num of subarrays with sum 0"