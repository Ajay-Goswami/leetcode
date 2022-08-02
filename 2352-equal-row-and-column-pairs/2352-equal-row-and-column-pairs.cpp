class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> colCount;
        int size = grid.size();
        int res = 0;
        for (int j = 0; j < size; j++)
        {
            vector<int> col(size);
            for (int i = 0; i < size; i++)
                col[i] = grid[i][j];
            
            if (colCount.find(col) != colCount.end())
                res += colCount[col];
            else
            {
                int count = 0;
                for (const auto& row : grid)
                {
                    if (row == col)
                        count++;
                }
                colCount[col] = count;
                res += count;
            }
        }
        return res;
    }
};