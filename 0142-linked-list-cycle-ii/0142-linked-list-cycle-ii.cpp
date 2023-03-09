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
    ListNode *detectCycle(ListNode *head) 
    {
        if(!head)
            return NULL;
        unordered_map<ListNode*,int>mp;
        ListNode* temp=head;
        while(temp->next)
        {
            if(mp[temp]==0)
                mp[temp]++;
            else
                return temp;
            temp=temp->next;
        }
        
        
        return NULL;
        
    }
};