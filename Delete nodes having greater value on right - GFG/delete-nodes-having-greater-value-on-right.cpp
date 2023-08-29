//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node* reverse(Node* head)
    {
        Node* prev=NULL;
        Node* curr=head;
        Node* nextNode=head;
        
        while(nextNode)
        {
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        head=prev;
        
        return head;
    }
    
    Node *compute(Node *head)
    {
        Node* node=reverse(head);
        Node* temp=node;
        int maxi=temp->data;
        while(temp->next)
        {
            if(temp->next->data>=maxi)
            {
                maxi=temp->next->data;
                temp=temp->next;
            }
            else
            {
                temp->next=temp->next->next;
            }
        }
        
        head=reverse(node);
        
        return head;
    }
    
    // https://www.youtube.com/watch?v=RJhZ1Ld-rwA -- Got the idea from here.. but bit confusing
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends