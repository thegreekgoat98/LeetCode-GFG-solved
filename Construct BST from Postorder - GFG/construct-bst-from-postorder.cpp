//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/


Node* makeTree(int l,int r,int in[])
{
    if(r<l)
        return NULL;
    if(l==r)
        return new Node(in[l]);
    
    int mid=l+(r-l)/2;
    Node* root=new Node(in[mid]);
    root->left=makeTree(l,mid-1,in);
    root->right=makeTree(mid+1,r,in);
    
    return root;
}

Node *constructTree (int post[], int size)
{
    int in[size];
    for(int i=0;i<size;++i)
        in[i]=post[i];
        
    sort(in,in+size);
    
    int pos=0;
    for(;pos<size;++pos)
        if(in[pos]==post[size-1])
            break;
    
    Node* root=new Node(in[pos]);
    
    root->left=makeTree(0,pos-1,in);
    root->right=makeTree(pos+1,size-1,in);
    
    
    return root;
}