class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int ind=nums.size()-1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val){swap(nums[i],nums[ind]);ind--;i--}
        // }
        // return nums;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==val)count++;
        }
        nums.clear();
//         inplace
        for(int i=0;i<n;i++){
            if(nums[i]!=val)nums.push_back(nums[i]);
        }
        return n-count;
    }
};