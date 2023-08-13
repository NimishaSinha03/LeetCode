class Solution {
public:
    int solve(vector<int>& nums,int l, int n, vector<int>&dp){
        if(n==l)return nums[l] ;
        if(n<l)return 0;
        if(dp[n]!=-1)return dp[n];
        int choose=nums[n]+solve(nums,l,n-2,dp);
        int not_choose=solve(nums,l,n-1,dp);
        dp[n]= max(choose, not_choose);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1)return nums[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        int first=solve(nums,0,n-2,dp1);
        int second=solve(nums,1,n-1,dp2);
        return max(first, second);
    }
};