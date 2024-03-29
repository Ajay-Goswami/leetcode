class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        vector<vector<int>> dp(m, vector<int> (n, 0));
    
        for(int j=0; j<n; j++) dp[0][j] = mat[0][j];
    
        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                int u = mat[i][j] + dp[i-1][j];
                int ld = mat[i][j], rd = mat[i][j];
    
                if(j-1>=0) ld += dp[i-1][j-1];
                else ld += 1e8;
    
                if(j+1<n) rd += dp[i-1][j+1];
                else rd += 1e8;
    
                dp[i][j] = min(u, min(ld, rd));
            }
        }
    
        int mini=1e8;
        for(int j=0; j<n; j++)
            mini = min(mini, dp[m-1][j]);
        return mini;
    }
};