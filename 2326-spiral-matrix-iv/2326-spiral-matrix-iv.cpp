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
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) 
    {
        vector<vector<int>>mat(n,vector<int>(m,-1));
        int top=0,down=n-1;
        int left=0,right=m-1;
        int dir=0;
        ListNode* temp=head;
        
        while(left<=right && top<=down)
        {
            if(dir==0)
            {
                if(temp)
                {
                    for(int i=left;i<=right;++i)
                    {
                        mat[top][i]=temp->val;
                        temp=temp->next;
                        if(!temp)
                            break;
                    }
                    top++;
                }
                else
                    break;
            }
            else if(dir==1)
            {
                if(temp)
                {
                    for(int i=top;i<=down;++i)
                    {
                        mat[i][right]=temp->val;
                        temp=temp->next;
                        if(!temp)
                            break;
                    }
                    right--;
                }
                else
                    break;
            }
            else if(dir==2)
            {
                if(temp)
                {
                    for(int i=right;i>=left;--i)
                    {
                        mat[down][i]=temp->val;
                        temp=temp->next;
                        if(!temp)
                            break;
                    }
                    down--;
                }
                else
                    break;
            }
            else //dir==3
            {
                if(temp)
                {
                    for(int i=down;i>=top;--i)
                    {
                        mat[i][left]=temp->val;
                        temp=temp->next;
                        if(!temp)
                            break;
                    }
                    left++;
                }
                else
                    break;
            }
            
            dir=(dir+1)%4;   
        }
        
        return mat;
        
    }
};