/*
Runtime: 104 ms, faster than 80.00% of C++ online submissions for Network Delay Time.
Memory Usage: 27.5 MB, less than 100.00% of C++ online submissions for Network Delay Time.
*/

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& a, int N, int K) {
        vector<vector<pair<int,int>>> g(N);
        for(int i=0; i<a.size(); i++){
            int u = a[i][0] - 1, v = a[i][1] - 1, c = a[i][2];
            g[u].push_back({v,c});
        }
        auto ret = dijkstra(g, K-1);
        ret[K-1]=0;
        int hi = 0;
        for(int i=0; i<N; i++){
            if(ret[i] == 10000) return -1;
            hi = max(hi, ret[i]);
        }
        return hi;
    }
    
    vector<int> dijkstra(vector<vector<pair<int,int>>>& g, int src){
        int n = g.size();
        vector<int> ret(n, 10000);
        vector<int> found;
        found.push_back(src);
        for(auto e:g[src]){
            ret[e.first]=e.second;
        }
        while(found.size()<=n){
            int nextmin=10000;
            for(int i=0; i<n; i++){
                if(std::find(found.begin(), found.end(), i) == found.end()){
                    int premin=nextmin;
                    nextmin=min(nextmin,ret[i]);
                    if(premin!=nextmin) src=i;
                }  
            }
            found.push_back(src);
            for(auto e:g[src]){
                ret[e.first]=min(e.second+nextmin,ret[e.first]);
            }
        }
        return ret;
    }
};
