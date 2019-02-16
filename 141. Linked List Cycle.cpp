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
    bool hasCycle(ListNode *head) {
        if(!head) return false; 
        ListNode* cur = head;
        unordered_set<ListNode*> visited;
        while(true){
            int preSize = visited.size();
            visited.insert(cur);
            cur=cur->next;
            if(cur==NULL) return false;
            if(preSize==visited.size()) return true;
        }
        return 0;
    }
    
};
