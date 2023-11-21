class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n=nums.size();
        int l=0,r=n-1,ls=0;
        int rs=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<n;i++){
            rs-=nums[i];
            if(ls==rs)return i;
            ls+=nums[i];
        }
        return -1;
    }
};