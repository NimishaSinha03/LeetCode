class Solution {
public:
    // countintg sort
    vector<int>sort(vector<int>& nums){
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto x:m){
            int f=x.second;
            while(f--)nums.push_back(x.first);
        }
        return nums;
    }
    int longestConsecutive(vector<int>& nums) {
        vector<int>v=sort(nums);
        if(v.size()==0)return 0;
        // if(v=={})return 0;
        int maxi=INT_MIN;
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            int a=v[i];
            int b=v[i-1];
            if((a-b)==1)
            {
               count+=1;
            }
            else if(a-b==0)
            continue;
            else
            {
               maxi=max(maxi,count);
               count=1;
            }
        }
        maxi=max(maxi,count);
        return maxi;
    }
    
};