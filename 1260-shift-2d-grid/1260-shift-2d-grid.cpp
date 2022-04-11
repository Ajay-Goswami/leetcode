class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>> ans(row,vector<int>(col));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                int newJ=(j+k)%col; 
                
                int newI=(i+(j+k)/col)%row; 
                
                ans[newI][newJ]=grid[i][j];
            }
        }
        return ans;
    }
};