class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int column= grid[0].size();
        int count=0;
        
        int L = 0;
        int R = column - 1;
        
        while(L < row   && R >=0 ){
            if(grid[L][R] < 0 ){
                count += row - L;
                R--;
            }
            else
                L++;
        }
        return count;
    }
};
