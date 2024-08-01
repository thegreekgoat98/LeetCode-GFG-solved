class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int n=details.size();
        int cnt=0;
        for(auto&str:details)
        {
            int age=stoi(str.substr(11,2));
            cnt+=(age>60);
        }
        return cnt;
    }
};