/*
Runtime: 28 ms, faster than 98.62% of C++ online submissions for Contains Duplicate.
Memory Usage: 11.4 MB, less than 100.00% of C++ online submissions for Contains Duplicate.
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
            if(nums[i]==nums[i-1]) return true;
        return false;
    }
};
