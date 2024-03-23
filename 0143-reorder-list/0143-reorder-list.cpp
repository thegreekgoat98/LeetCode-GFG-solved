/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextnode=head;
            
        while(nextnode)
        {
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
            
        head=prev;
        return head;
    }
    //////////////////////
    void reorderList(ListNode* head) 
    {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* rev=reverseList(slow);
        ListNode* curr=head;
        while(rev->next!=NULL)
        {
            ListNode* tempRev=rev->next;
            ListNode* temp=curr->next;
            curr->next=rev;
            rev->next=temp;
            curr=temp;
            rev=tempRev;
        }
    
    }
};
//https://www.youtube.com/watch?v=7cp_HR1BT1E --- LEGEND

//Recursive reverse function will take O(n) stack space