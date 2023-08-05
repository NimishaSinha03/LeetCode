class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m{{0,-1}};
        int maxi=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)sum+=1;else sum-=1;
            if(m.count(sum))maxi=max(maxi,i-m[sum]);
            else m[sum]=i;
        }
        return maxi;
    }
};