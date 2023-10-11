class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){return mid;}
            if(nums[s]<=nums[mid])
                // means left part iis sorted
            {
                if(nums[s]<=target&&target<nums[mid])
                // terget lies within the left sorted part
                {e=mid-1;}
                // else target lies in right part
                else {s=mid+1;  }
            }
            // if left part is not sorted
            else{
                // therfore checking in the right part, since right val atoh sorted hoga hi-->think
                if(nums[mid]<target&&target<=nums[e]){s=mid+1;}
                else {e=mid-1;}
            }
            
        }
        return -1;
    }
};