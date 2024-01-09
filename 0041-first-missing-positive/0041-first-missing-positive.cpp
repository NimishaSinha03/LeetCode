class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set <int> s;
        for(auto i:nums){
            if(i>0)
            s.insert(i);
        }
        if(s.size()==0)return 1;
        vector<int>v(s.begin(),s.end());
        if(v[0]>1)return 1;
        for(int i=0;i<v.size();i++){
            if(v[i]!=i+1)return i+1;
        }
    return v.size()+1;
    }
};