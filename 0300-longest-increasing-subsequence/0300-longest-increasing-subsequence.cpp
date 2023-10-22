class Solution {
public:
    int solve(vector<int>&nums, int ind, int prev,vector<vector<int>> &dp){
        if(ind>=size(nums))return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int pick=0,not_pick;
        if(prev == -1 || nums[ind] > nums[prev])pick=1+solve(nums,ind+1,ind,dp);
        not_pick=solve(nums,ind+1,prev,dp);
        dp[ind][prev+1]= max(pick,not_pick);
        return dp[ind][prev+1];
        }
        int lengthOfLIS(vector<int>& nums) {
        int ind=0;
        int prev=-1;
            int n=nums.size();
            vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,ind, prev,dp);
    }
};
