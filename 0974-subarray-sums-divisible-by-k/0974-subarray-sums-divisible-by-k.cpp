class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int prefixsum=0,count=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int mod=((prefixsum % k) + k) % k;
            // if (mp.count(mod))
            count+=mp[mod];
            mp[mod]++;
        }
        return count;
    }
};