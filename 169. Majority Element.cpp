/*
Runtime: 32 ms, faster than 27.91% of C++ online submissions
Memory Usage: 11.3 MB, less than 100.00% of C++ online submissions
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len=nums.size();
        if(len==1) return nums[0];
        sort(nums.begin(), nums.end());
        if(nums[len/2]==nums[len/2-1]) return nums[len/2];
        else return nums[len/2+1];
    }
};
