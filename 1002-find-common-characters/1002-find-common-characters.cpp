class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int>minFreq(26,INT_MAX);
        for(string&word:words)
        {
            vector<int>currFreq(26,0); 
            for(char&ch:word) //count frequency of all character of a string
                currFreq[ch-'a']++;
            
            for(int i=0;i<26;++i) //count minimum frequency
                minFreq[i]=min(currFreq[i],minFreq[i]);
        }
        vector<string>result;
        for(int i=0;i<26;++i)
        {
            while(minFreq[i]>0)
            {
                result.push_back(string(1,i+'a'));
                minFreq[i]--;
            }
        }
        return result;
    }
};

//https://leetcode.com/problems/find-common-characters/discuss/5260655/oror-Easiest-Solution-oror-C%2B%2B-oror-JAVA-oror-PYTHON-oror-JAVASCRIPT-oror-Beginner-Friendly   ------> simple and easy explanation 