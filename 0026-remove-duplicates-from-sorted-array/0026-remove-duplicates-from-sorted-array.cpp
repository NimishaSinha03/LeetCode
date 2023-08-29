class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for (const auto& element : s) {
        nums.push_back(element);
    }
        return s.size();
    }
};