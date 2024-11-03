class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int n=s.size(),m=goal.size();
        if(n!=m)
            return false;
        if(s==goal)
            return true;
        
        for(int i=0;i<n-1;++i)
        {
            //rotate
            rotate(s.begin(),s.begin()+1,s.end());
            
            if(s==goal)
                return true;
        }
        return false;
    }
};

// https://www.youtube.com/watch?v=6fFWixNh4rg  -->1st method