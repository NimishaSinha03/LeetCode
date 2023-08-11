class Solution {
public:
    int solve(int amount, vector<int>& coins,int i,vector<vector<int>>&dp){
        if(amount==0)return 1;
        if(i==coins.size())return 0;
        if(dp[amount][i]!=-1)return dp[amount][i];
        int take=0,not_take=0;
        if(coins[i]<=amount)
        take=solve(amount-coins[i],coins,i,dp);
        not_take=solve(amount, coins,i+1,dp);
            return dp[amount][i]=take + not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(amount+1,vector<int>(n+1,-1));
        return solve(amount, coins,0,dp);
    }
};