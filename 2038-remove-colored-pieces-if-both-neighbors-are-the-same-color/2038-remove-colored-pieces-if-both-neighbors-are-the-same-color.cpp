class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int n=colors.size();
        int aliceChances=0,bobChances=0;
        
        for(int i=1;i<n-1;++i)
        {
            if(colors[i-1]==colors[i] && colors[i]==colors[i+1])
            {
                if(colors[i]=='A')
                    aliceChances++;
                else
                    bobChances++;
            }
        }
        
        return aliceChances>bobChances;
    }
};

// https://www.youtube.com/watch?v=8jlP3D1Dnj4