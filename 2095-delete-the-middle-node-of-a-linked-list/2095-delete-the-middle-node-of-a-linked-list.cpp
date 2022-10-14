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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* curr=head;
        int total=1;
        while(curr->next)
        {
            total++;
            curr=curr->next;
        }
        ///////////
        if(total==1)
            return NULL;
        int x=total/2;
        int k=1;
        curr=head;
        while(k<x)
        {
            curr=curr->next;
            k++;
        }
        ListNode* temp=curr->next;
        curr->next=temp->next;
        temp->next=NULL;
        return head;
        
    }
};