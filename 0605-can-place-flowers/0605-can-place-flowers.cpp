class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        flowerbed.insert(flowerbed.begin(),0); //insert a 0 at the beginning
        flowerbed.push_back(0); //insert a 0 at the end
        
        for(int i=1;i<flowerbed.size()-1;++i)
        {
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0)
            {
                n--;
                flowerbed[i]=1;
            }     
        }
        
        return n<=0;
    }
};