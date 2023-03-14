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
    Node* new_node=new Node(x);
    Node* fast=head;
    Node* slow=head;
    Node* slow_prev=NULL;
    
    while(fast && fast->next)
    {
        slow_prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    //handling even and odd lengths
    if(!fast)
    {
        Node* old=slow;
        slow_prev->next=new_node;
        new_node->next=old;
    }
    else
    {
        Node* old=slow->next;
        slow->next=new_node;
        new_node->next=old;
    }
    
	return head;
}