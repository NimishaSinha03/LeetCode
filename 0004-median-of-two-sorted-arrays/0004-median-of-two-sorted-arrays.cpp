class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>v;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            
            v.push_back(nums1[i]);i++;
        }
        while(j<nums2.size()){
           
            v.push_back(nums2[j]);
            j++;
        }
        int s = v.size();
        if (s % 2 != 0) {
            return v[s / 2];
        } else {
            return (v[s / 2 - 1] + v[s / 2]) / 2.0; 
        }
    }
};