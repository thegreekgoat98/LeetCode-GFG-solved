class Solution {
public:
    bool isVowel(char ch)
    {
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    }
    ////////////
    string sortVowels(string s) 
    {
        int n=s.size();
        vector<char>vowels;
        for(int i=0;i<n;++i) //O(n)
        {
            if(isVowel(s[i]))
                vowels.push_back(s[i]);
        }
        
        sort(vowels.begin(),vowels.end()); //O(nlogn)
        int k=0;
        for(int i=0;i<n;++i) //O(n)
        {
            if(isVowel(s[i]))
                s[i]=vowels[k++];
        }
        
        return s;
    }
};

//overall time complexity: O(nlogn)