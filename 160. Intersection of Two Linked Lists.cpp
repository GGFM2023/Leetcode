/*
Runtime: 80 ms, faster than 17.15% of C++ online submissions.
Memory Usage: 22.4 MB, less than 100.00% of C++ online submissions.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;
        ListNode *cur1=headA, *cur2=headB;
        int preSize=visited.size();
        while(true){
            if(cur1!=NULL){
                visited.insert(cur1);
                if(preSize==visited.size()) return cur1;
                else{
                    cur1=cur1->next;
                    preSize=visited.size();
                }  
            } 
            if(cur2!=NULL){
                visited.insert(cur2);
                if(preSize==visited.size()) return cur2;
                else{
                    cur2=cur2->next;
                    preSize=visited.size();
                }  
            } 
            if(cur1==NULL && cur2==NULL) return NULL;
        }
        return 0;
    }
};
