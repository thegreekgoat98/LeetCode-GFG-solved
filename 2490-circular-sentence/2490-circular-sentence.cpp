class Solution {
public:
    bool isCircularSentence(string sentence) 
    {
        int n=sentence.size();
        bool space=false; //flag for determining if space is ther eor not
        for(int i=0;i<n;i++)
        {
            char ch=sentence[i];
            
            if(ch!=' ')
                continue;
            else if(ch==' ')
            {
                space=true;
                if(sentence[i-1]!=sentence[i+1])
                    return false;
            }
        }
        
        if(space==false)
            return sentence.front()==sentence.back();
        return true && sentence.front()==sentence.back();
    }
};