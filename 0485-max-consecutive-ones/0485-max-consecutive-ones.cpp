class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            // maxi=max(count,maxi);
            if(nums[i]==1)count++;
            else {
            maxi=max(count,maxi);
            count=0;
            }
        }
        maxi=max(count,maxi);
        return maxi;
    }
};