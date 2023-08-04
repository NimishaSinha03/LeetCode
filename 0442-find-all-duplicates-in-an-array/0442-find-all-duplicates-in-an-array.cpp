class Solution {
public:
    // vector<int>sort(vector<int>& nums){
    //     map<int,int>m;
    //     for(int i=0;i<nums.size();i++){
    //         m[nums[i]]++;
    //     }
    //     nums.clear();
    //     for(auto x:m){
    //         int f=x.second;
    //         while(f--)nums.push_back(x.first);
    //     }
    //     return nums;
    // }
    vector<int> findDuplicates(vector<int>& nums) {
    //     nums=sort(nums);
    //     vector<int>ans;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==nums[i+1]){ans.push_back(nums[i]);i+=1;}
    //     }
    //     return ans;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i])-1;
        nums[index]=-nums[index];
        if(nums[index]>0)ans.push_back(abs(nums[i]));
    }
    return ans;
    }
};