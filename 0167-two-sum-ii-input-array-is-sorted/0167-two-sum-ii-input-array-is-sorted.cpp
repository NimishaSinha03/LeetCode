class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int s=0,e=arr.size()-1;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int want=target-arr[i];
            s=i+1;
            while(s<=e){
                int mid=(s+e)/2;
                if(arr[mid]==want){
                    return {i+1,mid+1};
                }
                else if(arr[mid]>want)e=mid-1;
                else s=mid+1;
            }
        }
        // return ans;
        return {};
    }
};