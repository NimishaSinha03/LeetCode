class Solution {
public:
    vector<int>sort(vector<int>&nums){
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
        }
        nums.clear();
        for(auto x:m){
            int cnt = x.second;
        while (cnt--)
        {
            nums.push_back(x.first);
        }
        }
        return nums;
    }
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)return 0;
        // vector<int>v;
        // int diff=0
        int maxi=INT_MIN;
        vector<int>num=sort(nums);
        // sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
           int  diff=num[i+1]-num[i];
            // v.push_back(diff);
            
            maxi=max(maxi,diff);
        }
    
        // sort(v.begin(),v.end());
        // return v[v.size()-1];
        return maxi;
    }
};