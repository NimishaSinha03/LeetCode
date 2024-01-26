class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        for(int i=0;i<ans.size();i++){
            ans[i]=nums[i];
        }
        sort(ans.begin(),ans.end());
        int j=ans.size()-1;
        for(int i=1;i<ans.size();i+=2)
            nums[i] = ans[j--];
        for(int i=0;i<ans.size();i+=2)
            nums[i] = ans[j--];
    }
};

// public void wiggleSort(int[] nums) {
//         int[] arr = new int[nums.length];
//         for(int i=0;i<arr.length;i++)
//             arr[i] = nums[i];
//         Arrays.sort(arr);
//         int j = arr.length-1;
//         for(int i=1;i<arr.length;i+=2)
//             nums[i] = arr[j--];
//         for(int i=0;i<arr.length;i+=2)
//             nums[i] = arr[j--];
//     }