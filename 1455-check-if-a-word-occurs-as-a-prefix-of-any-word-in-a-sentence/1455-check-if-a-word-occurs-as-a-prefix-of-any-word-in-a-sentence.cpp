class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        vector<string>words;
        string word="";
        for(char ch:sentence)
        {
            if(ch==' ')
            {
                words.push_back(word);
                word="";
            }
            else
                word+=ch;
        }
        words.push_back(word);
        //////////////////////////////
        for(int i=0;i<words.size();++i)
        {
            string sub=words[i].substr(0,searchWord.size());
            if(sub==searchWord)
                return i+1;
        }
        return -1;
    }
};