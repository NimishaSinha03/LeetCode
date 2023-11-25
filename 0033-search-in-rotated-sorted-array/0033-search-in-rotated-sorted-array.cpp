class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        while(s<=e){
            int mid = (s + e) / 2;
            if(nums[mid]==target)return mid;
            // dekh ab ya toh iss line m lie kareg ayaa uss line m,
            // toh dono conditions to if ele se m daal
            if( nums[s]<=nums[mid]){
                if(nums[s]<=target&&nums[mid]>target)e=mid-1;
                else s=mid+1;
            }
            else{
                if(target>nums[mid]&&target<=nums[e])s=mid+1;
                else e=mid-1;
            }
            // return -1;
        }
        return -1;
    }
};