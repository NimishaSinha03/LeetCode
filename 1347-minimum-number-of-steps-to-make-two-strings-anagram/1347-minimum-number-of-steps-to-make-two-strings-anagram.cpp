class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
            for(auto i:s)
                mp[i]++;
            
        for(auto i:t)
            mp[i]--;
        
        int sum=0;
        for(int i=0;i<mp.size();i++){
            sum+=abs(mp[i]);
        }
        return sum/2;
    }
};