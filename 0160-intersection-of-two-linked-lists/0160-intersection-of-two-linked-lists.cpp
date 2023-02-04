/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* a=headA;
        ListNode* b=headB;
        while(a)
        {
            while(b)
            {
                if(a==b)
                    return a;
                b=b->next;
            }
            a=a->next;
            b=headB;
        }
        return NULL;
    }
};