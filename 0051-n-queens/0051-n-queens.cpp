class Solution {
public:
    void solve(vector<vector<string>>&ans, int n, int col,vector<string>&board, vector<int>&side, vector<int>&upperd,vector<int>&lowerd){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(side[row]==0&&upperd[n-1+col-row]==0&&lowerd[row+col]==0){
                board[row][col]='Q';
                side[row]=1;
                upperd[n-1+col-row]=1;
                lowerd[row+col]=1;
                solve(ans,n,col+1,board,side,upperd, lowerd);
                board[row][col]='.';
                side[row]=0;
                upperd[n-1+col-row]=0;
                lowerd[row+col]=0;
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
        vector<int>side(n,0);
        vector<int>upperd(2*n-1,0);
        vector<int>lowerd(2*n-1,0);
        solve(ans,n,0,board,side,upperd,lowerd);
        return ans;
    }
};