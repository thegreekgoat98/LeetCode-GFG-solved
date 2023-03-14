//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    
    vector<int>mergeTwoArray(vector<int>&arr1,vector<int>&arr2)
    {
        vector<int>ans;
        int i=0,j=0;
        
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<arr2[j])
            {
                ans.push_back(arr1[i]);
                i++;
            }
            else
            {
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        if(i==arr1.size())
        {
            for(int k=j;k<arr2.size();++k)
                ans.push_back(arr2[k]);
        }
        else if(j==arr2.size())
        {
            for(int k=i;k<arr1.size();++k)
                ans.push_back(arr1[k]);
        }
        
        return ans;
    }
    
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int>ans;
        
        for(auto&temp:arr)
            ans=mergeTwoArray(ans,temp);
            
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends