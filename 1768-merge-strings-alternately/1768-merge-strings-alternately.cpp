class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i=0,j=0;
        int n=word1.size(),m=word2.size();
        string ans="";
        
        while(i<n && j<m)
            ans+=string()+word1[i++]+word2[j++];
        
        
        
//         if(i==n)
//         {
//             while(j<m)
//                 ans+=word2[j++];
//         }
//         if(j==m)
//         {
//             while(i<n)
//                 ans+=word2[i++];
//         }
        
        return ans+word1.substr(i)+word2.substr(j);
    }
    
    
    // https://leetcode.com/problems/merge-strings-alternately/discuss/1075483/C%2B%2B-2-pointers -- VERY COOL
};