class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>count;
        for(auto j:mp){
            count.push_back({j.second,j.first});
        }
        sort(count.rbegin(),count.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(count[i].second);
        }
        return ans;
    }
};