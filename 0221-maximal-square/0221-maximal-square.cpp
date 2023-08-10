class Solution {
public:
    int solve(vector<vector<char>>& m,int i,int j,int& maxi,vector<vector<int>>&dp){
        if(i>=m.size()||j>=m[0].size())return 0;
            if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
        int left=solve(m,i+1,j,maxi,dp);
        int right=solve(m,i,j+1,maxi,dp);
        int diag=solve(m,i+1,j+1,maxi,dp);
        if(m[i][j]=='1'){
        dp[i][j]=min(left,min(right,diag))+1;
        maxi=max(maxi,dp[i][j]);
            return dp[i][j];
        }
        else
        return 0 ;

    }
    int maximalSquare(vector<vector<char>>& matrix) {
        // return solve(matrix,0,0,maxi);
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int maxi = 0;
        int s=solve(matrix, 0,0 , maxi,dp);
          return maxi*maxi; 
    }
};