class Solution {
    private:
        int dp[1001][1001];
    public:
        int lcs(string x,string y,int m,int n){
        for(int i=0;i<=m;++i){
            for(int j=0;j<=n;++j){
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(x[i-1] == y[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[m][n];
    }
    
    int minDistance(string word1, string word2) {
        return word1.length() + word2.length() - 2*lcs(word1,word2,word1.length(),word2.length());
    }
};