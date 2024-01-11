#include <vector>

class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char c) {
        c=board[row][col];
        board[row][col]='.';
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == c) return false;
            if (board[row][i] == c) return false;
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                else if (!isValid(board, i, j, board[i][j])) return false; 
            }
        }
        return true;
    }
};
