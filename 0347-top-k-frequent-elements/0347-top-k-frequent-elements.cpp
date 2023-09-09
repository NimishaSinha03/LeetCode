class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> count;
        for(auto j:mp){
            count.push({j.second,j.first});
        }
        // sort(count.rbegin(),count.rend());
        vector<int>ans;
        while(k--){
            ans.push_back(count.top().second);
            count.pop();
        }
        return ans;
    }
};