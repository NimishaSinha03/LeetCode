class Solution {
public:
        vector<vector<int>>ans;

    void solve(vector<int>&candidates,int target, int i,vector<int>&output){
        if(i>=candidates.size()||target<0)return ;
        if(target==0){
            ans.push_back(output);
            return;
        }
        solve(candidates,target,i+1,output);
        output.push_back(candidates[i]);
        solve(candidates,target-candidates[i],i,output);
        output.pop_back();
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // vector<vector<int>>ans;
        vector<int>output;
        solve(candidates,target,0,output);
        return ans;
    }
};