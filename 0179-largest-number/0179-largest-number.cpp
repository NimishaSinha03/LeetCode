bool cmp(int a, int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s="";
        sort(nums.begin(),nums.end(),cmp);
        for(int i=0;i<nums.size();i++){
            s+=to_string(nums[i]);
            if(nums[0]==0)return "0";
        }
        // sort(s.rbegin(),s.rend());
        return s;
    }
};