//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int findMinimumSum(Node* root)
    {
        if(!root)
            return INT_MAX;
        if(!root->left && !root->right)
            return root->data;
        else if(!root->left)
            return findMinimumSum(root->right)+root->data;
        else if(!root->right)
            return findMinimumSum(root->left)+root->data;
        else
            return root->data+min(findMinimumSum(root->left),findMinimumSum(root->right));
    }
    
    int search(Node *root,int target,int sum)
    {
        if(!root)
            return -1;
        if(root->data<target)
            return search(root->right,target,sum+root->data);
        else if(root->data>target)
            return search(root->left,target,sum+root->data);
        else if(root->data==target)
        {
            int mn=min(findMinimumSum(root->left),findMinimumSum(root->right));
            if(mn==INT_MAX)
                mn=0;
            return sum-mn;
        }
        
        
    }

    int maxDifferenceBST(Node *root,int target)
    {
        return search(root,target,0);
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends