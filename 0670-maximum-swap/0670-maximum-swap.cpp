class Solution {
public:
    int maximumSwap(int num) 
    {
        string str=to_string(num);
        int n=str.size();
        vector<int>rightMax(n); //index store karega right msx element ka
        rightMax[n-1]=n-1;
        
        for(int i=n-2;i>=0;--i)
            rightMax[i]=str[i]>str[rightMax[i+1]]?i:rightMax[i+1];
        
        for(int i=0;i<n;++i)
        {
            if(str[i]<str[rightMax[i]])
            {
                swap(str[i],str[rightMax[i]]);
                return stoi(str);
            }
        }
        return num;
    }
};

//codestorywithmik - 1st approach