class Solution {
public:
    int solve(vector<int>&nums,int ind, vector<int>&dp){
        if(ind>=nums.size()-1)return 0;
        // jab apna pahoch gye h end tk ya use exceed kr diya hai, toh why to return any number;
        // base case
        if(dp[ind]!=-1)return dp[ind];
//         madatory line for memoization
        int ans=100000;
        for(int i=ind+1;i<=ind+nums[ind];i++){
            // checking kaha se kaha tk ka recurssion karein?
            int pick=1+solve(nums,i,dp);
            // yaha recurrssion kara hai
            // 1 is added due to the fact that ek jump hoga
            ans=min(pick,ans);
        }
            dp[ind]=ans;
        return ans;
    }
    int jump(vector<int>& nums) {
        if(nums.size()<=1)return 0;
        if(nums.size()==2)return 1;
        vector<int>dp(nums.size(),-1);
        int ans=solve(nums,0,dp);
        return ans;
    }
};