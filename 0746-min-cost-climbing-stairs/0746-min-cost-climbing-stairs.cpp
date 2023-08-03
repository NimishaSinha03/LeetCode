class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // int curr;
        // int prev1=cost[0];
        // int prev2=cost[1];
        // for(int i=2;i<cost.size();i++){
        //     curr=cost[i]+min(prev1,prev2);
        //     prev1=prev2;
        //     prev2=curr;
        // }
        // return min(prev1,prev2);
        
        
        // using dp
        int n=cost.size();
        vector<int>dp(n+1, -1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};