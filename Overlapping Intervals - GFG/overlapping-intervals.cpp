//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]<b[0];
    }
    ///////////////
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) 
    {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),cmp);
         
        vector<int>temp=intervals[0];
         
        for(int i=1;i<intervals.size();++i)
        {
            if(intervals[i][0]<=temp[1])
            {
               temp[1]=max(temp[1],intervals[i][1]); 
            }
            else if(temp[1]<intervals[i][0])
            {
                ans.push_back(temp);
                temp=intervals[i];
            }
        }
        ans.push_back(temp);
    
        return ans; 
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends