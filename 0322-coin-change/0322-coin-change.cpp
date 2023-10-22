class Solution {
public:
    int solve(vector<int>&coins,int amount,int i, vector<vector<int>>&dp){
        if(amount==0)return 0;
        if(i < 0 || amount < 0) return INT_MAX-1;
        if(dp[i][amount]!=-1)return dp[i][amount];
        int pick, npick;
        pick=solve(coins,amount-coins[i],i,dp)+1;
        npick=solve(coins,amount,i-1,dp);
        dp[i][amount]=min(pick,npick);
        return dp[i][amount];

    }
    int coinChange(vector<int>& coins, int amount) {
       vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans= solve(coins,amount,coins.size()-1,dp);
        return (ans<INT_MAX-1)?ans:-1;
    }
};