class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> rows[9];
        unordered_map<char,int> column[9];
        unordered_map<char,int> boxes[9];
        
        //iterate the whole sudoku cell by cell
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char ch=board[i][j];        //present cell
                
                if(ch!='.' && (rows[i][ch]++ >0 || column[j][ch]++ >0 ||boxes[i/3*3+j/3][ch]++ >0))
                        return false;
            }
        }
        return true;
    }
};