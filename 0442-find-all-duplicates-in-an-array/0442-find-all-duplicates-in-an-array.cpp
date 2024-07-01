class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
            unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto x:m){
            int f=x.second-1;
            while(f--)nums.push_back(x.first);
        }
        return nums;
    }
        
        
    // vector<int>ans;
    // for(int i=0;i<nums.size();i++){
    //     int index=abs(nums[i])-1;
    //     nums[index]=-nums[index];
    //     if(nums[index]>0)ans.push_back(abs(nums[i]));
    // }
    // return ans;
    // }
};