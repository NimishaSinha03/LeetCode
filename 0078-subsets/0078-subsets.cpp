class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>& v,int i, vector<int>r){
        if(i>=nums.size()){
            v.push_back(r);
            return;}
            // exlude
            solve(nums,v,i+1,r);
            // include
            r.push_back(nums[i]);
            solve(nums,v,i+1,r);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>r;
        solve(nums,v,0,r);
        return v;
    }
};