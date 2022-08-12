class Solution {
public:
    
    int maxIncreaseKeepingSkyline(vector<vector<int>>& g) {
        int n = g.size();
        vector<int> rmax(n, 0), cmax(n, 0);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                rmax[i] = max(rmax[i], g[i][j]);
                cmax[i] = max(cmax[i], g[j][i]);
            }
        }
        
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ans += min(rmax[i], cmax[j]) - g[i][j];
            }
        }
        return ans;
    }
};