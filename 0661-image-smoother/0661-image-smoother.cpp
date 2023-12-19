class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> smoothed(m, vector<int>(n, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int sum = 0;
                int count = 0;

                for (int r = i - 1; r <= i + 1; ++r) {
                    for (int c = j - 1; c <= j + 1; ++c) {
                        if (r >= 0 && r < m && c >= 0 && c < n) {
                            sum += img[r][c];
                            ++count;
                        }
                    }
                }

                smoothed[i][j] = sum / count;
            }
        }

        return smoothed;
    }
};