class Solution {
public:
    bool isSafe(int col, int row, vector<string>&board, int n){
        int x=row;
        int y=col;
        while(x>=0&&y>=0){
            if(board[x][y]=='Q')return false;
            x--;
            y--;
        }
        x=row;
        y=col;
        while(y>=0){
            if(board[x][y]=='Q')return false;
            y--;
        }
        x = row;
        y = col;
        while(x<n&&y>=0){
            if(board[x][y]=='Q')return false;
            x++;
            y--;
        }
        // roww=row;
        // coll=col;
        return true;
    }
    
    void solve(int col, vector<string>&board, vector<vector<string>>&ans, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(col, row, board , n)){
                board[row][col]='Q';
                solve(col+1,board, ans, n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0, board, ans , n);
        return ans;
    }
};