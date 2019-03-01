/*
Runtime: 12 ms, faster than 100.00% of C++ online submissions for Projection Area of 3D Shapes.
Memory Usage: 10.4 MB, less than 6.06% of C++ online submissions for Projection Area of 3D Shapes.

N*N: x=y
input array first layer = x
            second layer = y

exmample 2:
four pillars

xy projection = 4 // total no-zero entry
xz projection = sum of the tallest pillar for every x
yz projection = sum ot the tallest pillar for every y 
*/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int N=grid.size();
        int xy=0;
        int xz=0;
        int yz=0;

        for(auto i : grid){
            for(int j : i){
                if(j!=0) xy+=1;
            }
        }

        for(auto i : grid){
            int max = *max_element(i.begin(), i.end());
            xz+=max;
        }

        int max=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                max=std::max(grid[j][i],max);
            }
            yz+=max;
            max=0;
        }

        return xy+yz+xz;
    }
};
