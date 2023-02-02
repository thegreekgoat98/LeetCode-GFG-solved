class Solution {
public:
    int maximumGroups(vector<int>& grades) 
    {
        int n=grades.size();
        return (-1+sqrt(1+8*n))/2;
    }
    
//     used the formula--->          (-b+sqrt(b^2-4ac))/2a

// formula for finding root of a quadratic equation
    
    //https://www.youtube.com/watch?v=pNmLvLr9xek-- beautifully mathematically solved
};