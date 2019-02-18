/*
Runtime: 20 ms, faster than 20.74% of C++ online submissions for Fibonacci Number.
Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Fibonacci Number.
*/

class Solution {
public:
    int fib(int N) {
        if(N==0) return 0;
        else if(N==1) return 1;
        return fib(N-1)+fib(N-2);
    }
};
