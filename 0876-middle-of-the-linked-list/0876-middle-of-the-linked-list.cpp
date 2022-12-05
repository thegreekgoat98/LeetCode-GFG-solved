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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* curr=head;
        int total=1;
        while(curr->next)
        {
            total++;
            curr=curr->next;
        } //total---->total number of nodes 
        //////////
        int n=total/2;
    
        ///////////  n---->middle node
        
        curr=head;
        int k=1;
        while(k<=n)
        {
            curr=curr->next;
            k++;
        }
        return curr;
    }
};