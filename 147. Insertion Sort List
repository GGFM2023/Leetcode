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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL) return head;
        
        ListNode* newHead=new ListNode(INT_MIN);
        newHead->next=head;
        ListNode *p = newHead, *cur=head->next, *pre=head;
        while(cur!=NULL){
            while(p!=pre){
                if(cur->val < (p->next)->val){
                    pre->next=cur->next;
                    cur->next=p->next;
                    p->next=cur;
                    cur=pre->next;
                    break;
                }else{
                    p=p->next;
                }
            }
            if(p==pre){
                pre = cur;
                cur = cur->next;
            }
            p=newHead;
            
        }
        return newHead->next;
    }
};
