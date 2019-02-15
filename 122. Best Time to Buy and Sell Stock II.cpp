class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro =0;
        for(int i=1; i<prices.size(); i++){
            int dif=prices[i]-prices[i-1];
            if(dif>0)
                maxPro+=dif;
        }
        return maxPro;
    }
};
