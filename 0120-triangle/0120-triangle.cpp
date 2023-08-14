class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        if(i==triangle.size()-1)return triangle[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int left=solve(i+1,j+1,triangle,dp);
        int right=solve(i+1,j,triangle,dp);
        dp[i][j]= triangle[i][j]+min(left,right);
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(0,0,triangle,dp);
    }
};