class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>city;
        for( auto i:paths){
            city.insert(i[0]);
        }
        for(auto i:paths){
            string ans=i[1];
            if(city.find(ans)==city.end())return ans;
        }
        return "";
    }
};