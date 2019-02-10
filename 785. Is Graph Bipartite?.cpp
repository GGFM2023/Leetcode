class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        colors = vector<int>(n,0);
        int color=1;
        for(int i=0; i<n; i++){
            if(colors[i]==0 && !setColor(graph, i, color)) return false;
        }
        return true;
    }
private:
    vector<int> colors;
    bool setColor(vector<vector<int>>& graph, int i, int color){
        if(colors[i]==color) return true;
        else if(colors[i]== -color) return false;
        else colors[i] = color;
        for(int e:graph[i]){
            if(!setColor(graph, e, -color)) return false;
        }
        return true;
    }
};
