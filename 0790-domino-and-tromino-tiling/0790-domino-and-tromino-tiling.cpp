class Solution {
    int mod = 1e9+7;
public:
    int numTilings(int n) {
        vector<vector<long long int>>dp(n+2,vector<long long int>(3,0));
        
        dp[n][1]=1;
        
        for(int len = n-1 ; len>=0 ; len--){
            for(int flag = 1 ; flag<=2 ; flag++){
                long long int a=0,b=0,c=0;
		
                if(flag == 1){
                    a = dp[len+1][1]%mod;
                    b = dp[len+2][1]%mod;
                    c = (dp[len+2][2] + dp[len+2][2])%mod;
                }
                else {
                    b = dp[len+1][2]%mod;
                    c = dp[len+1][1]%mod;
                }
                dp[len][flag] = (a+b+c)%mod;
            }
        }
        return dp[0][1];
    }
};