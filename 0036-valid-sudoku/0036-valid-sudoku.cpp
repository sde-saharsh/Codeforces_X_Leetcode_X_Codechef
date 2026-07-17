class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            set<char> row;
            for (int j = 0; j < 9; j++) {
                //  [row][col]
                if (board[j][i] == '.') continue;
                if (row.count(board[j][i])) return false;
                else row.insert(board[j][i]);
            }
        }
        // end

        // row check
        for (int i = 0; i < 9; i++) {
            set<char> col;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (col.count(board[i][j])) return false;
                else col.insert(board[i][j]);
            }
        }
        
        // cout<<"kimaya"<<endl;

        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                set<char> box;
                if (helper(row, col, board, box)) return false;
            }
        }
        return true;
    }
    bool helper(int row, int col, vector<vector<char>>& board, set<char> box) {
        for (int i = row; i < row+3; i++) {
            for (int j = col; j < col+3; j++) {
                if (board[i][j] == '.')
                    continue;
                if (box.count(board[i][j]))
                    return true;
                else {
                    box.insert(board[i][j]);
                }
            }
        }
        return false;
    }
};
