//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int ans=0;
	    int n=nums.size();
	    vector<pair<int,int>>pos(n);
	    for(int i=0;i<n;++i)
	    {
	        pos[i].first=nums[i];
	        pos[i].second=i;
	    }
	    sort(begin(pos),end(pos));
	    
	    for(int i=0;i<n;++i)
	    {
	        if(pos[i].second==i)
	            continue;
	        
	        while(i!=pos[i].second)
	        {
	            ans++;
	            swap(pos[i],pos[pos[i].second]);
	        }
	    }
	    
	    return ans;
	}
	
// 	https://www.youtube.com/watch?v=TbO2c4BCVlo
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends