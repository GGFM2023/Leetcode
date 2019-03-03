/*
Runtime: 60 ms, faster than 99.03% of C++ online submissions for Search in a Binary Search Tree.
Memory Usage: 29.2 MB, less than 79.75% of C++ online submissions for Search in a Binary Search Tree.
*/

/*
start from top to bottom
current node value > target value, go left child
current node value < target value, go right child
current node value = target value, return current node
current node value = null, return null
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        while(cur!=NULL){
            if(cur->val==val) return cur;
            else if(cur->val > val) cur=cur->left;
            else cur=cur->right;
        }
        return NULL;
    }
};
