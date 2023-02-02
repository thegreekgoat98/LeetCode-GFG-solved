class Solution {
public:
    int maximumGroups(vector<int>& grades) 
    {
        int n=grades.size();
        return (-1+sqrt(1+8*n))/2;
    }
    
    //https://www.youtube.com/watch?v=pNmLvLr9xek-- beautifully mathematically solved
};