class Solution {
public:
    int solve(vector<int>& prices, vector<vector<int>>& dp, int cur, int isHolding){
        if(cur > prices.size()-1) 
            return 0;
        if(dp[cur][isHolding] != -1) 
            return dp[cur][isHolding];
        int ans = INT_MIN;
        if(isHolding){
            ans = prices[cur] + solve(prices,dp,cur+2,false);// sell
            ans = max(ans, solve(prices,dp,cur+1,true));// hold
        } else {
            ans = -prices[cur] + solve(prices,dp,cur+1,true);// buy
            ans = max(ans,solve(prices,dp,cur+1,false));// wait
        }
        return dp[cur][isHolding] = ans;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return solve(prices,dp,0,false);
    }
};