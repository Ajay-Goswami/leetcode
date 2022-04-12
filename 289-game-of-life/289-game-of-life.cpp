class Solution {
private:
    //8 neighbors
    vector<pair<int,int>> neighbors {
        {-1,0}, //top
        {1,0},  //bottom
        {0,-1}, //left
        {0,1},  //right
        {-1,-1},//top-left
        {-1,1}, //top-right
        {1,-1}, //bottom-left
        {1,1},  //bottom-right
    };
    
    
    //check if the dead cell will be live (if there are exactly 3 live neighbors)
    bool dead_cell_check(vector<vector<int>>& board, int i, int j){
        int count_neighbors = 0;
        
        for (auto n : neighbors)
            if (no_out_range(board, i + n.first, j + n.second) && board[i + n.first][j + n.second] == 1)
                count_neighbors++;
        
        return count_neighbors == 3;
    }

    //check if the live cell will be dead (if there are more than 3 or less than 2 live neighbors)
    bool live_cell_check(vector<vector<int>>& board, int i, int j){
        int count_neighbors = 0;
        
        for (auto n : neighbors)
            if (no_out_range(board, i + n.first, j + n.second) && board[i + n.first][j + n.second] == 1)
                count_neighbors++;
        
        return count_neighbors < 2 || count_neighbors > 3;
    }
    
    //make sure that i and j is not out of range
    bool no_out_range(vector<vector<int>>& board, int i, int j){
        return (i >= 0 && i < board.size() && j >= 0 && j < board[0].size());
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<pair<int,int>> need_to_be_updated;
        
        //check for each cell if it needs to be changed (if a live cell becomes death or if a death cell becomes live)
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                //check for death cell
                if (board[i][j] == 0 && dead_cell_check(board,i,j))
                    need_to_be_updated.push_back({i,j});
                //check for live cell
                else if (board[i][j] == 1 && live_cell_check(board,i,j))
                    need_to_be_updated.push_back({i,j});
            
        //update
        for (auto x : need_to_be_updated){
            int i = x.first, j = x.second;
            
            if (board[i][j] == 1)
                board[i][j] = 0;
            else 
                board[i][j] = 1;
        }
        
    }
};