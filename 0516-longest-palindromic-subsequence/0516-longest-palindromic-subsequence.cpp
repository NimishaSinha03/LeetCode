class Solution {
public:
    int solve(string &s, string &r, int i, int j, vector<vector<int>>&dp){
        if(i<0||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==r[j])return dp[i][j] =1+solve(s,r,i-1,j-1,dp);
        dp[i][j]= max(solve(s,r,i-1,j,dp),solve(s,r,i,j-1,dp));
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s) {

        string r=string(s.rbegin(),s.rend());
        int n=s.size()-1;
        vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
        return solve(s,r,n,n,dp);
    }
};