class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         vector<pair<int,int>> ans;
         for(int i=0;i<mat.size();i++){
             int cnt=0;
             for(int j=0;j<mat[i].size();j++){
                 if(mat[i][j]==1) cnt++;
             }
             ans.push_back({cnt,i});
         }
         sort(ans.begin(), ans.end());
         vector<int> res;
         for(int i=0;i<k;i++){
             res.push_back(ans[i].second);
         }
         return res;
    }
};