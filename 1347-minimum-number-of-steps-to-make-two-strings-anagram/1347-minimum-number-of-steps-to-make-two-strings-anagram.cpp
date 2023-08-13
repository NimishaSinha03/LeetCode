class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(auto ch: s)mp[ch]++;
        for(auto ch:t)mp[ch]--;
        int sum=0;
        for(int i=0;i<mp.size();i++){
            sum+=abs(mp[i]);
        }
        return sum/2;
    }
};