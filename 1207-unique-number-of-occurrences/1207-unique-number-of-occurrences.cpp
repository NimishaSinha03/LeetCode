class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>s;
        for(int i:arr){
            mp[i]++;
        }
        for( const auto& i:mp){
            if(!s.insert(i.second).second)return false;
        }
        return true;
    }
};