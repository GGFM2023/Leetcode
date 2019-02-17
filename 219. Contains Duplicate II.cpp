/*
Runtime: 4108 ms, faster than 2.40% of C++ online submissions for Contains Duplicate II.
Memory Usage: 10.7 MB, less than 100.00% of C++ online submissions for Contains Duplicate II.
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()<=1) return false;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++)
                if(nums[i]==nums[j] && j-i<=k) return true;
        }
        return false;
    }
};
