//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    unordered_map<int,vector<int>>adj; 
    void makeGraph(Node* root)
    {
        queue<pair<Node*,int>>q;  //{node,parent}
        q.push({root,-1}); //root node doesn't have a parent
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            Node* node=temp.first;
            int parent=temp.second;
            
            if(parent!=-1)
            {
                adj[parent].push_back(node->data);
                adj[node->data].push_back(parent);
            }
            
            if(node->left)
                q.push({node->left,node->data});
            if(node->right)
                q.push({node->right,node->data});
        }
    }
    
    int minTime(Node* root, int target) 
    {
        //1. Convert the tree into a graph (undirected)
        //2. BFS
        
        //1.
        makeGraph(root);
        //adjacancy list is prepared and stored in adj map.
        
        //2.
        int n=adj.size();
        queue<int>q;
        // vector<bool>vis(n+1,false);
        unordered_map<int,bool>vis;
        
        q.push(target);
        vis[target]=true;
        int time=-1;
        
        while(!q.empty())
        {
            time++;
            int sz=q.size();
            while(sz--)
            {
                int node=q.front();
                q.pop();
                
                for(auto it:adj[node])
                {
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it]=true;
                    }
                }
            }
        }
        
        return time;
    }
    //SIMILAR QUESTION TO:  https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends