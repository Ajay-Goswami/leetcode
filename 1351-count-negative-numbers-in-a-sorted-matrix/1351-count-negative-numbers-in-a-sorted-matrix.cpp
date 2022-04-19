class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int column= grid[0].size();
        int count=0;
        
        for(int i=row-1; i>=0; i--){
            for(int j=column-1; j>=0; j--){
                if(grid[i][j]>=0)
                    break;
                count++;
            }
        }
        return count;
    }
};
