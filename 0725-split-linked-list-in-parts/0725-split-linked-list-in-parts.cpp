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
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        int L=0;
        ListNode* curr=head;
        while(curr)
        {
            L++;
            curr=curr->next;
        }
        
        int eachBucketNodes=L/k;
        int remainingNodes=L%k;
        
        curr=head;
        ListNode*prev=NULL;
        vector<ListNode*>ans(k,NULL);
        for(int i=0;i<k && curr!=NULL;++i)
        {
            ans[i]=curr;
            for(int cnt=1;cnt<=eachBucketNodes+(remainingNodes>0?1:0);cnt++)
            {
                prev=curr;
                curr=curr->next;
            }
            prev->next=NULL;
            remainingNodes--;
        }
        
        return ans;
    }
};

//https://www.youtube.com/watch?v=tY1HevJFD98  ---> CODESTORYWITHMIK legend
// what an explanation