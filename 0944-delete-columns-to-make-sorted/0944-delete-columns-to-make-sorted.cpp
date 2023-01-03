class Solution {
public:
    int minDeletionSize(vector<string>& strs) 
    {
        int cnt=0;
        for(int i=0;i<strs[0].size();++i) //iterating through indices
        {
            for(int j=1;j<strs.size();++j) //iterating through strings
            {
                if(strs[j][i]<strs[j-1][i])
                {
                    cnt++;
                    break;
                }    
            }
        }
        return cnt;
        
    }
};