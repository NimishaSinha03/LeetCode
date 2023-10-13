class Solution {
public:
    void solve(vector<vector<string>>&ans, vector<string>& board, int n,int col, vector<int>&side, vector<int>&upperd, vector<int>&lowerd){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(side[row]==0&&lowerd[col+row]==0&&upperd[n-1+col-row]==0){
                board[row][col]='Q';
                side[row]=1;
                lowerd[col+row]=1;
                upperd[n-1+col-row]=1;
                solve(ans, board, n, col+1,side, upperd, lowerd);
                board[row][col]='.';
                side[row]=0;
                lowerd[col+row]=0;
                upperd[n-1+col-row]=0;
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
        vector<int>side(n,0),upperd(2*n-1,0),lowerd(2*n-1,0);
        solve(ans, board, n, 0, side, upperd, lowerd);
        return ans;
    }
};