/*
Runtime: 24 ms, faster than 24.44% of C++ online submissions for Move Zeroes.
Memory Usage: 9.5 MB, less than 100.00% of C++ online submissions for Move Zeroes.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0) nums.erase(nums.begin()+i);
            else i++;
        }
        for(int i=nums.size(); i<len; i++) nums.push_back(0);
    }
};
