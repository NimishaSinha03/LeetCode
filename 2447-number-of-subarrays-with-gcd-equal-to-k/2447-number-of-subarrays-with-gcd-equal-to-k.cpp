class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int gcd,ans=0;
        for(int i=0;i<nums.size();i++){
            gcd=nums[i];
            if(gcd==k)ans++;
            for(int j=i+1;j<nums.size();j++){
                gcd=__gcd(gcd,nums[j]);
                if(gcd==k)ans++;
                if(gcd<k)break;
            }
        }
        return ans;
    }
};