class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        vector<int>one,no;
        int n=matches.size();
        for(int i=0;i<n;i++){
            mp[matches[i][1]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(matches[i][0])==mp.end())mp[matches[i][0]]=0;
        }
        for(auto it:mp){
            if(it.second==1)one.push_back(it.first);
            else if(it.second==0)no.push_back(it.first);
        }
        sort(no.begin(),no.end());
        sort(one.begin(),one.end());
        return {no,one};
    }
};