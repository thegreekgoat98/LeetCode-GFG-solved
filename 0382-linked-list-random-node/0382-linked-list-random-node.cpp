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
    int cnt=0;
    ListNode* head=NULL;
    
    Solution(ListNode* head) 
    {
        this->head=head;
        while(head)
        {
            this->cnt++;
            head=head->next;
        }
    }
    
    int getRandom() 
    {
        int x=rand()%cnt;
        ListNode* temp=this->head;
        
        while(x--)
            temp=temp->next;
        
        return temp->val;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */