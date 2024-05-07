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
    ListNode* removeNodes(ListNode* head) 
    {
        stack<ListNode*>S;
        ListNode* temp=head;
        while(temp)
        {
            S.push(temp);
            temp=temp->next;
        }
        
        temp=S.top();
        S.pop();
        int maxVal=temp->val;
        
        ListNode* resultHead=new ListNode(temp->val);

        while(!S.empty())
        {
            temp=S.top();
            S.pop();
            
            if(temp->val<maxVal)
                continue;
            
            ListNode* newNode=new ListNode(temp->val);
            newNode->next=resultHead;
            resultHead=newNode;
            maxVal=temp->val;
        }
        
        return resultHead;
    }
};