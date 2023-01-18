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
    bool hasCycle(ListNode *head) 
    {
        if(!head)
            return false;
        set<ListNode*>S;
        ListNode* temp=head;
        while(temp->next)
        {
            auto x=S.find(temp);
            if(x!=S.end())
                return true;
            else
                S.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};