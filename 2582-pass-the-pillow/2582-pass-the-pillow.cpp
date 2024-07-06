class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int dir=1; //1---> left to right || 2---> right to left
        int idx=1;
        while(time)
        {
            if(idx+dir>=1 and idx+dir<=n)
            {
                time--;
                idx+=dir;
            }
            else
            {
                dir*=(-1);
            }
        }
        return idx;
    }
};

//https://www.youtube.com/watch?v=tI8OO93t2zM --> smart solution (codestoryMIK)