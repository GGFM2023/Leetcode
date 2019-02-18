/*
Runtime: 44 ms, faster than 31.69% of C++ online submissions for Path Sum II.
Memory Usage: 37.5 MB, less than 100.00% of C++ online submissions for Path Sum II.
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> paths;
        if(!root) return paths;
        vector<int> path;
        if(root->left == NULL && root->right == NULL){
            if(root->val == sum){
                path.push_back(sum);
                paths.push_back(path);
            }
            return paths;
        }
        int a = root->val;
        vector<vector<int>> left = pathSum(root->left, sum-a);
        vector<vector<int>> right = pathSum(root->right, sum-a);
        for(auto p:left){
            p.insert(p.begin(), a);
            paths.push_back(p);
        }
        for(auto p:right){
            p.insert(p.begin(), a);
            paths.push_back(p);
        }   
        return paths;
            
    }

};
