class Solution {
public:
    int solve(int i, vector<int>& nums, vector<int>&dp){
        if(i==0)return nums[0];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int choose=solve(i-2,nums,dp)+nums[i];
        int not_choose=solve(i-1,nums,dp)+0;
        return dp[i]=max(choose , not_choose);
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        return solve(n, nums,dp);
    }
};
// int Memoization(int i, vector<int> &nums, vector<int> &dp)
//        	        {
//        	            if (i == 0)
//        	                return nums[0];
//        	            if (i < 0)
//        	                return 0;
//        	            if (dp[i] != -1)
//        	                return dp[i];
//        	            int pick = nums[i] + Memoization(i - 2, nums, dp);
//        	            int nonPick = 0 + Memoization(i - 1, nums, dp);
//        	            return dp[i] = max(pick, nonPick);
//        	        }
//        	    int rob(vector<int> &nums)
//        	    {
//        	        int n = nums.size();
//        	        vector<int> dp(n, -1);
//        	        return Memoization(n-1, nums, dp);
//        	    }
