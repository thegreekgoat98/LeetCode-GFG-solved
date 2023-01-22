class Solution {
public:
    bool makeStringsEqual(string s, string target) 
    {
        int sone=count(s.begin(),s.end(),'1');
        int tone=count(target.begin(),target.end(),'1');
        
        if(sone==0 || tone==0)
            return s==target;
        return true;
    }
};