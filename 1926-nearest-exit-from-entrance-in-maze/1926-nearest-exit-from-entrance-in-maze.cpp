class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
    {
        int n=maze.size();
        int m=maze[0].size();
        
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        int level=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            level++;
            
            for(int i=0;i<sz;++i)
            {
                auto x=q.front();
                q.pop();
                
                int a=x.first;
                int b=x.second;
                
                for(int k=0;k<4;++k)
                {
                    int na=a+dx[k];
                    int nb=b+dy[k];
                    
                    if(na>=0 && na<n && nb>=0 && nb<m)
                    {
                        if(maze[na][nb]=='+')
                            continue;
                        if(na==0 || na==n-1 || nb==0 || nb==m-1)
                            return level;
                        q.push({na,nb});
                        maze[na][nb]='+';
                    }
                        
                }
            }
        }
        return -1;
    }
};