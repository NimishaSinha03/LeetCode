class Solution {
public:
    int solve(int n,int dp[]){
        if(n<=1)return 1;
        if(dp[n])return dp[n];
        for(int i=1;i<=n;i++){
            dp[n]+=solve(i-1,dp)*solve(n-i,dp);
        }
        return dp[n];
    }
    int numTrees(int n) {
        int dp[20]={0};
        return solve(n,dp);
    }
};