class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int n=students.size();
        int arr[2]={0};
        
        for(int&stud:students)
            arr[stud]++;
        /////////////////////////////////
        for(int i=0;i<n;++i)
        {
            int sand=sandwiches[i];
            
            if(arr[sand]==0)
                return n-i;
            
            arr[sand]--;
        }
        return 0;
        
    }
};
//https://www.youtube.com/watch?v=M0lhTkhUlp4 -  Approach - 2