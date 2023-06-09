class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        for(char&it:letters)
            if(it>target)
                return it;
        return letters[0];
    }
};