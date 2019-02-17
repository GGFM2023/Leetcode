/*
Runtime: 36 ms, faster than 86.44% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 11.2 MB, less than 100.00% of C++ online submissions for Remove Linked List Elements.
*/


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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode* preHead=new ListNode(INT_MAX);
        preHead->next=head;
        ListNode* cur=head;
        ListNode* pre=preHead;
        while(cur!=NULL){
            if(cur->val==val) {
                pre->next=cur->next;
                cur=cur->next;
            }else{
                pre=pre->next;
                cur=cur->next;
            }
            
        }
        return preHead->next;
    }
};
