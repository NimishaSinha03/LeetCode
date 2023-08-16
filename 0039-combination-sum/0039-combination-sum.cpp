class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& candidates, int target, int i, vector<int>temp){
        if(target==0){ans.push_back(temp);return;}
        if(target<0||i>=candidates.size())return;
        solve(candidates, target,i+1,temp);
        temp.push_back(candidates[i]);
        solve(candidates, target-candidates[i],i,temp);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        vector<int>temp;
        solve(candidates,target,0,temp);
        return ans;
    }
};