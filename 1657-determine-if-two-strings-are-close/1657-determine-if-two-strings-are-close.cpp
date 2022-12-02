class Solution {
public:
    bool closeStrings(string a, string b) 
    {
        if(a.size()!=b.size())
            return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)
            return true;
        
        //to check both the strings have same characters
        vector<bool>al(26,false),bl(26,false); 
        for(int i=0;i<a.size();++i)
        {
            al[a[i]-'a']=true;
            bl[b[i]-'a']=true;
        }
        /////////////////////////////////////
        //to match the frequency of characters of both the strings
        vector<long>afreq(26,0),bfreq(26,0);
        for(int i=0;i<a.size();++i)
        {
            afreq[a[i]-'a']++;
            bfreq[b[i]-'a']++;
        }
        sort(afreq.begin(),afreq.end());
        sort(bfreq.begin(),bfreq.end());
        
        return afreq==bfreq && al==bl; 
    }
    
    
    //if same characters are present and frequency of the same characters are equal in any order, then the two strings are close.
};