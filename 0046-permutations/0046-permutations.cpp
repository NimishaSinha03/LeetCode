class Solution {
public:
vector<vector<int>>ans;
void rec(vector<int>&curr,vector<int>& nums){
            if(curr.size()==nums.size()){
                ans.push_back(curr);
                return;}
            for(int x:nums){
                if(find(curr.begin(),curr.end(),x)==curr.end()){
                    curr.push_back(x);
                    rec(curr,nums);
                    curr.pop_back();
                }
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>curr={};
        rec(curr,nums);
        return ans;
    }
};