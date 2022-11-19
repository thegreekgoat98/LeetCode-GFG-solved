//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<vector<int>>findBFS(Node *root)
    {
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            
            for(int i=0;i<size;++i)
            {
                Node* node=q.front();
                q.pop();
                
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }
    
    bool isEqual(vector<int>&a,vector<int>&b)
    {
        if(a.size()!=b.size())
            return false;
        for(int i=0;i<a.size();++i)
            if(a[i]!=b[i])
                return false;
        return true;
    }
    
    
    bool areAnagrams(Node *root1, Node *root2)
    {
        vector<vector<int>>bfs1=findBFS(root1);
        vector<vector<int>>bfs2=findBFS(root2);
        
        if(bfs1.size()!=bfs2.size())
            return false;
        for(int i=0;i<bfs1.size();++i)
        {
            sort(bfs1[i].begin(),bfs1[i].end());
            sort(bfs2[i].begin(),bfs2[i].end());
        }
        
        for(int i=0;i<bfs1.size();++i)
        {
            if(!isEqual(bfs1[i],bfs2[i]))
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends