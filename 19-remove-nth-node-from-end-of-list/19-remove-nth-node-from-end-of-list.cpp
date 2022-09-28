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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        
        ListNode* curr=head;
        int total=1;
        while(curr->next)
        {
            total++;
            curr=curr->next;
        }
        if(total==1) // if only one node present
        {
            head=NULL;
            return head;
        }
        if(total==n) // 1st node has to be deleted
        {
            head=head->next;
            return head;
        }
        int target=total-n;
        int k=1;
        curr=head;
        while(k<target)
        {
            k++;
            curr=curr->next;
        }
        ListNode* rem=curr->next;
        //////////
        if(rem==NULL)
        {
            curr->next=NULL;
            return head;
        }
        curr->next=rem->next;
        rem->next==NULL;
        return head;
    }
};