class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minf=prices[0];
        for(int i=0; i<prices.size();i++){
            minf=min(minf,prices[i]);
            int profit= prices[i]- minf;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};