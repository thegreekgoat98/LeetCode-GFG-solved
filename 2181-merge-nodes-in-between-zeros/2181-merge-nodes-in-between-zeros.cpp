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
    ListNode* mergeNodes(ListNode* head) 
    {
        head=head->next;
        ListNode* temp=head;
        ListNode* res=head;
        int sum=0;
        
        while(temp)
        {
            if(temp->val!=0)
            {
                sum+=temp->val;
                temp=temp->next;
            }
            else //temp->val==0
            {
                res->val=sum;
                res->next=temp->next;
                temp=temp->next;
                res=temp;
                sum=0;
            }
        }
        
        return head;
    }
};
//took help from -- https://leetcode.com/problems/merge-nodes-in-between-zeros/discuss/1784963/c%2B%2B-SC-O(1)