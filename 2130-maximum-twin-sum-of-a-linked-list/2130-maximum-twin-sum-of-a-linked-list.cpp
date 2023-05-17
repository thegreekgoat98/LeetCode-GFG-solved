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
    
    int pairSum(ListNode* head) 
    {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //Reversing the second half of he LL
        ListNode* nextNode,*prev=NULL;
        while(slow)
        {
            nextNode=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nextNode;
        }
        //Now prev points to last node.
        int maxSum=INT_MIN;
        while(prev)
        {
            maxSum=max(maxSum,head->val+prev->val);
            head=head->next;
            prev=prev->next;
        }
        
        return maxSum;
    }
};