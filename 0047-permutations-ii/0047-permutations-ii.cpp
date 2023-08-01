class Solution {
public:
    void rec(int k,int j,vector<int>nums,vector<vector<int>>&ans){
        if(k==j-1){
            ans.push_back(nums);
            return;
        }
        for(int i=k;i<j;i++){
            if(k!=i&&nums[k]==nums[i])continue;
            swap(nums[k],nums[i]);
            rec(k+1,j,nums,ans);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        rec(0,nums.size(),nums,ans);
        return ans;
    }
};