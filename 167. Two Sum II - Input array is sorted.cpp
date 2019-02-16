/*
#### solution 1 ####
Runtime: 544 ms, faster than 8.14% of C++ online submissions.
Memory Usage: 9.4 MB, less than 100.00% of C++ online submissions.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size()-1; i++){
            for(int j=i+1; j<numbers.size(); j++){
                if(numbers[i]+numbers[j]==target) return {i+1,j+1};
            }
        }
        return {};
    }
};
