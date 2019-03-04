/*
Runtime: 92 ms, faster than 10.04% of C++ online submissions for Monotonic Array.
Memory Usage: 16.1 MB, less than 23.66% of C++ online submissions for Monotonic Array.
*/
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int N=A.size();
        int i=1;
        while(i<N && A[i]==A[i-1]) i++;
        if(i==N) return true;
        if(A[i]>A[i-1]){
            for(int j=i+1; j<N; j++)
                if(A[j]<A[j-1]) return false;
            return true;
        }else{
            for(int j=i+1; j<N; j++)
                if(A[j]>A[j-1]) return false;
            return true;
        }
    }
};


