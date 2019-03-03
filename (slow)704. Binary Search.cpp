/*
Runtime: 52 ms, faster than 16.52% of C++ online submissions for Binary Search.
Memory Usage: 11.3 MB, less than 5.94% of C++ online submissions for Binary Search.
*/

/*
using binary search tree, from middle index split array into subtrees
middle value == targe, return its index
middle value < targe && it has subtree, check its right subtree
middle value > targe && it has subtree, check its left subtree
return -1, when no subtree exist
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0) return -1;
        return helper(0,nums.size(),nums,target);
    }
    
    int helper(int start, int end, vector<int>& nums, int target){
        if(start==end) return -1;
        int cur=(end-start)/2+start;
        if(nums[cur]==target) return cur;
        else if(nums[cur]>target && start!=end-1) return helper(start, cur, nums, target);
        else if(nums[cur]<target && start!=end-1) return helper(cur+1, end, nums, target);
        else return -1;
    }
};
