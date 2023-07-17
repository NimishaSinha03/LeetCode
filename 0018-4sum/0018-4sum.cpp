class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
      for(int i=0;i<n-3;i++){
          for(int j=i+1;j<n-2;j++){
              long long neww = (long long)target - (long long)nums[i] - (long long)nums[j];
              int l=j+1,h=n-1;
              while(l<h){
                  if(nums[l]+nums[h]<neww)l++;
                  else if(nums[l]+nums[h]>neww)h--;
                  else 
                  {st.insert({nums[i],nums[j],nums[l],nums[h]});
                  l++;
                  h--;
                  }
              }
          }
      }
      for(auto it:st){
          ans.push_back(it);
      }  
      return ans;
    }
};