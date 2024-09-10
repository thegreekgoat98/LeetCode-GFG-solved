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
        ListNode* curr=head;
        ListNode* agla=head->next;
        
        while(agla)
        {
            int x=gcd(curr->val,agla->val);
            ListNode* newNode=new ListNode(x);
            
            curr->next=newNode;
            newNode->next=agla;
            
            curr=agla;
            agla=agla->next;
        }
        
        return head;
    }
};