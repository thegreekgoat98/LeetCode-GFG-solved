//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	Node* slow=head;
	Node* fast=head;
	Node* slow_prev=NULL;
	Node* newNode=new Node(x);
	
	while(fast && fast->next)
	{
	    slow_prev=slow;
	    slow=slow->next;
	    fast=fast->next->next;
	}
	
	if(!fast)    //fast==NULL means EVEN length
	{
	    slow_prev->next=newNode;
	    newNode->next=slow;
	}
	else        //fast!=NULL means ODD length
	{
	    Node* temp=slow->next;
	    slow->next=newNode;
	    newNode->next=temp;
	}
	
	return head;
}