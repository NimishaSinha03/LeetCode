class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int n=tasks.size();
        for(int i=0;i<n;i++){
            mp[tasks[i]]++;
        }
        bool flag=false;
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==1){
                flag=true;
                break;
            }
            ans+=ceil(it->second/3.0);
        }
        if(flag)return -1;
        return ans;
    }
};