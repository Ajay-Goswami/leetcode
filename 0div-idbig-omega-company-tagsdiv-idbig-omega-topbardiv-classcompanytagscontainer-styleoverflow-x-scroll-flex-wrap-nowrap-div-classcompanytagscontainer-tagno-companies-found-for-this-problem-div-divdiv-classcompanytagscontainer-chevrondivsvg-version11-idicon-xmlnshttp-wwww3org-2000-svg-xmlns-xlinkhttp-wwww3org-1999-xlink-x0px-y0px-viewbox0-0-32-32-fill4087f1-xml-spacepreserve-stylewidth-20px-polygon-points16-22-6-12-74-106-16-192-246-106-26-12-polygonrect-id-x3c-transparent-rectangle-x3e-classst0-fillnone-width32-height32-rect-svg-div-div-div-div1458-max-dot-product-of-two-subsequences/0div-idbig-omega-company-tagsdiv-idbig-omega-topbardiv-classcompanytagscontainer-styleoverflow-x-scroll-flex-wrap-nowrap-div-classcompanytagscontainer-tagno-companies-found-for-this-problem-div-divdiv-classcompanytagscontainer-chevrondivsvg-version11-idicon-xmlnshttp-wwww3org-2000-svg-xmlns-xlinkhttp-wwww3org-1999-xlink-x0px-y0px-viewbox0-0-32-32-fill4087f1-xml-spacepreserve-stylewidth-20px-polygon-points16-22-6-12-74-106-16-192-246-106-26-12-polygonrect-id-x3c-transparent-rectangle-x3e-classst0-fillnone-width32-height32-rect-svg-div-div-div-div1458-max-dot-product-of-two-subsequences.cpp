class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        // Initialize a 2D DP array with int64_t to avoid overflow.
        vector<vector<int64_t>> dp(m + 1, vector<int64_t>(n + 1, INT_MIN));
        
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                // Calculate the dot product using int64_t.
                int64_t product = static_cast<int64_t>(nums1[i - 1]) * static_cast<int64_t>(nums2[j - 1]);
                
                // Update the DP table.
                dp[i][j] = max(dp[i - 1][j - 1] + product, product);
                dp[i][j] = max(dp[i][j], dp[i - 1][j]);
                dp[i][j] = max(dp[i][j], dp[i][j - 1]);
            }
        }
        
        return static_cast<int>(dp[m][n]); // Cast back to int for the final result.
    }
};
