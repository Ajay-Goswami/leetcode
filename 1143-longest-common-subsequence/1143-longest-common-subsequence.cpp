class Solution {
public:
    int t[1001][1001];
    int solve(string &text1, string &text2, int n, int m){
        if(n==0||m==0){
            return 0;
        }
        if(t[n][m]!=-1)
            return t[n][m];
        if(text1[n-1]==text2[m-1]){
            return t[n][m] = 1+solve(text1, text2, n-1, m-1);
        }
        else{
            return t[n][m] = max(solve(text1, text2, n-1, m), solve(text1, text2, n, m-1));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        for(int i=0;i<1001;i++){
            for(int j=0;j<1001;j++){
                t[i][j]=-1;
            }
        }
        return solve(text1, text2, n, m);
    }
};