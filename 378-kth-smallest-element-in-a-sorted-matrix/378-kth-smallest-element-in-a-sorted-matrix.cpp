class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(), v.end());
        for(int i=0 ; i<v.size()+1; i++){
            if(i==k-1)
            {
                return v[i];
            }
        }
        return -1;
    }
};