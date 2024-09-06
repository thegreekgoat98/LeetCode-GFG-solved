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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
        unordered_set<int>S(nums.begin(),nums.end());
        
        while(head!=NULL and S.find(head->val)!=S.end())
        {
            ListNode* temp=head;
            head=head->next;
            delete(temp); //deleteing the hanging node (dangling pointer)
        }
        
        ListNode* curr=head;
        while(curr and curr->next)
        {
            if(S.find(curr->next->val)!=S.end())
            {
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete(temp); //deleteing the hanging node (dangling pointer)
            }
            else
            {
                curr=curr->next;
            }
        }
        
        return head;
        
    }
};


// https://www.youtube.com/watch?v=qb7br7auuOc  -- The legend MIK