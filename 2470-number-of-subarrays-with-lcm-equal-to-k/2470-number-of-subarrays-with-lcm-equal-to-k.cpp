class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int lc;
        for(int i=0;i<n;i++){
            lc= nums[i];
            if(lc==k)ans++;
            for(int j=i+1;j<n;j++){
                lc=lcm(lc,nums[j]);
                if(lc==k)ans++;
                if(lc>k)break;
            }
        }
        return ans;
    }
};