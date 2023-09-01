class Solution {
public:
    void solve(vector<int>&nums,int i, vector<vector<int>>&ans ,vector<int>&output){
        if(i>=nums.size()){
           if( find(ans.begin(), ans.end(), output) == ans.end()){
            ans.push_back(output);
           }
            return;
        }
            output.push_back(nums[i]);
            solve(nums,i+1,ans,output);
            output.pop_back();
            solve(nums,i+1,ans,output);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        sort(nums.begin(),nums.end());
        solve(nums,0,ans,output);
        return ans;
    }
};
