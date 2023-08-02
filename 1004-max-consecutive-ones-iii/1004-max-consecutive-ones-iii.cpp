class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
//         int count=0;
//         int maxi=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){count++;}
//             else if(nums[i]==0&&k>0)
//                 {while(k--)count++;}
//             maxi=max(maxi,count);
//             count=0;
            
//         }
//         return maxi;
        
        int zero=0,i=0,j=0,maxi=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==0)zero++;
                while(zero>k)
                {if(nums[i]==0)
                    zero--;
                    i++;
                }
                maxi=max(maxi,j-i+1);
                j++;
        }
        return maxi;
    }
};