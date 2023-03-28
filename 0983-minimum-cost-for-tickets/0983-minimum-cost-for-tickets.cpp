class Solution {
public:
    int solve(vector<int> &days, vector<int> &costs, int index, vector<int>& dp){
        int n = days.size();
        if(index >= n) return 0;
        
        if(dp[index])  
            return dp[index];  
        
        int cost_day = costs[0] + solve(days, costs, index+1, dp);
        
        int i;
        for(i = index; i < n && days[i] < days[index]+7; i++);
        int cost_week = costs[1] + solve(days, costs, i, dp);
        
        for(i = index; i<n && days[i] < days[index]+30; i++);
        int cost_month = costs[2] + solve(days, costs, i, dp);     
        
        dp[index] = min({cost_day, cost_week, cost_month  });
        return dp[index];
    } 
    int mincostTickets(vector<int>& days, vector<int>& costs) { 
        vector<int> dp(366, 0);
        return solve(days,costs,0, dp);    
    }
};


