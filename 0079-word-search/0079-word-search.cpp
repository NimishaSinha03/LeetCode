class Solution {
public:
    bool solve(vector<vector<char>>&board,string word,int i, int j, int n, int m, int k){
        if(k>=word.size())return true; 
           // word found!
           if(i<0||j<0||i>=n||j>=m||board[i][j]=='.'||word[k]!=board[i][j])return false;
           // if index goes out of bounds, or the charcter is alsready visited , or word's character do  not match the board's  charcter, then word do not exsists on the  board
           board[i][j]='.';
           // ifall the above conditions are not satisfied, taht means the word exsists, and move forword, but don't forget to mark this word as visited
           bool temp=false;
           // false (0), ke saaath kisi ka bh OR (||) vahi de deta hai!
           int x[4]={0,0,-1,1};
           int y[4]={-1,1, 0, 0};
           // upar, neeche, daaye, baaye ki values ek saath check ho jaayegi
           for(int index=0;index<4;index++){
               temp=temp||solve(board, word, i+x[index],j+y[index],n,m,k+1);
           }
           board[i][j]=word[k];
           // fir se board ko vesa ka vesa hi kar diya
           return temp;
           // word mila toh true else false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        if(n==0)return false;
        int m=board[0].size();
        if(m==0)return false;
        if(word.size()==0)return false;
//         understood h ye toh
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[0]==board[i][j]){
                    if(solve(board, word,i,j,n,m,0))
                    return true;
                }
            }
            // If the first character of the word matches `board[i][j]`, call `solve`.
        // If `solve` returns `true`, immediately return `true`.
        }
        return false;
    }
};