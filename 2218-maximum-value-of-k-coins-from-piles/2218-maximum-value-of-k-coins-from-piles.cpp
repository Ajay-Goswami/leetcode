class Solution {
public:
    vector<vector<int>> dp;
    vector<vector<int>> pre;
    
    int solve(int i, int k) {
        if(i==pre.size()) 
            return k==0 ? 0 : INT_MIN;
        if(dp[i][k]!=-1) 
            return dp[i][k];
        int ans=0;
        for(int j=0; j<=min(k,(int)pre[i].size()-1); j++)
            ans = max(ans,pre[i][j]+solve(i+1,k-j));
        return dp[i][k]=ans;
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        dp.resize(n,vector<int>(k+1,-1));
        pre.resize(n);
        for(int i=0; i<n; i++) {
            pre[i].push_back(0);
            for(auto &x : piles[i])
                pre[i].push_back(pre[i].back()+x);
        }
        return solve(0,k);
    }
};