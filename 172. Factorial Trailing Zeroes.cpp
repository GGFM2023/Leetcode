/*
Runtime: 8 ms, faster than 100.00% of C++ online submissions.
Memory Usage: 11 MB, less than 100.00% of C++ online submissions
*/

int trailingZeroes(int n) {
        int s=0;
        n=n/5;
        while( n>0){
            s += n;
            n=n/5;
        }
        return s;
    }
