class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
      int i=0,j=n;
        while(i<j){
            if(nums[i]==0)
           { nums.erase(nums.begin()+i);
            nums.push_back(0);
            j--; }
        else i++;
        }
    }
};