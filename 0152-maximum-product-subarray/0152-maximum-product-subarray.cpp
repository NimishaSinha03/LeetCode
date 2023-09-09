class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int prod=1;

        for(int i=0;i<nums.size();i++)
        {
          prod*=nums[i];
          maxi=max(prod,maxi);
          if(prod==0)
           prod=1;
        }
        // neeche wala loop is done because  for example : [3,-1,4]ans 3 aayega upar, se we would have to che ck fro m back as well because, ham continue product kr rahe h upar from the start but peechhe se bhi no. aa sakta h jo ki bada ho aage ke product se jo ki hua h isi example m
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          prod*=nums[i];

          maxi=max(prod,maxi);
          if(prod==0)
           prod=1;
        }
        return maxi;
    }
};