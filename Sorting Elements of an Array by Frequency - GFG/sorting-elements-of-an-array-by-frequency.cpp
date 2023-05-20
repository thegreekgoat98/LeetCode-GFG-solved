//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first==b.first) //if same frequency
            return a.second<b.second;
        return a.first>b.first;
    }
    
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        unordered_map<int,int>mp;  
        for(int i=0;i<n;++i)
            mp[arr[i]]++;
        
        vector<pair<int,int>>nums; //{freq,num}
        for(auto it:mp)
            nums.push_back({it.second,it.first});
            
        sort(nums.begin(),nums.end(),cmp);//custom sort 
        
        vector<int>ans;
        
        for(auto&it:nums)
        {
            int freq=it.first;
            int ele=it.second;
            while(freq--)
                ans.push_back(ele);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends