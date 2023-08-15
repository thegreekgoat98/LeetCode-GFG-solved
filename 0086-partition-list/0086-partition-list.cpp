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
    ListNode* createNewNode(int x)
    {
        ListNode* node=new ListNode(x);
        
        return node;
    }
    //////////////////////////////////////////
    ListNode* partition(ListNode* head, int x) 
    {
        ListNode* temp=NULL;
        ListNode* ans=NULL;;
        ListNode* i=head;
        while(i)
        {
            if(i->val<x)
            {
                if(!temp)
                {
                    temp=createNewNode(i->val);
                    ans=temp;
                }
                else
                {
                    temp->next=createNewNode(i->val);
                    temp=temp->next;
                }
                    
                
            }
            i=i->next;
        }
        ///////////////////////////////
        
        i=head;
        while(i)
        {
            if(i->val>=x)
            {
                if(!temp)
                {
                    temp=createNewNode(i->val);
                    ans=temp;
                } 
                else
                {
                    temp->next=createNewNode(i->val);
                    temp=temp->next;
                }
                
            }
            i=i->next;
        }
        
        return ans;
    }
};