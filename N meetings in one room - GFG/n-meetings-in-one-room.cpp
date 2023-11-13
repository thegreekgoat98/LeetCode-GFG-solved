//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second<b.second;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>meetings;
        
        for(int i=0;i<n;++i)
            meetings.push_back({start[i],end[i]});
        
        sort(meetings.begin(),meetings.end(),cmp);
        
        int pehla=-1,akhri=-1;
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            if(akhri<meetings[i].first)
            {
                cnt++;
                pehla=meetings[i].first;
                akhri=meetings[i].second;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends