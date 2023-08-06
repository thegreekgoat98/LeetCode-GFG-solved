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
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        ListNode* i=head;
        ListNode* j=head->next;
        
        while(j)
        {
            int x=gcd(i->val,j->val);
            ListNode* newNode=new ListNode(x);
            newNode->val=x;
            
            i->next=newNode;
            newNode->next=j;
            
            i=j;
            j=j->next;
        }
        
        return head;
    }
};