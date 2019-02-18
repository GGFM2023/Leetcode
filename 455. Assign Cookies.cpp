/*
Runtime: 40 ms, faster than 97.62% of C++ online submissions for Assign Cookies.
Memory Usage: 10.4 MB, less than 100.00% of C++ online submissions for Assign Cookies.
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gg=0, ss=0;
        while(gg<g.size() && ss<s.size()){
            if(s[ss]>=g[gg]){
                ss++;
                gg++;
            }else{
                ss++;
            }
        }
        return gg;
    }
    
};
