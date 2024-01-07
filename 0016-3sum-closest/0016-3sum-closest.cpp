class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int s=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            // int sum=nums[i]+nums[j]+nums[k];
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(s-target))s=sum;
                if(sum<target)j++;
                else k--;
            }
        }
        return s;
    }
};
// logic
// isme basically 3 pointers liye hai
// i, j, k;
// ek baar i remains constant, and all the values of j and k are checked inside the for loop
// j is the pointer of i, and k is the laset one , so yaha pe we are finding out, that for one value of i, konsa j and k are perfect (using while loop)
//     and the for next i , j and k are found out, and if it is better than the previous triplet, the sum is updated accodingly using (                if(abs(sum-target)<abs(s-target))s=sum;
// )