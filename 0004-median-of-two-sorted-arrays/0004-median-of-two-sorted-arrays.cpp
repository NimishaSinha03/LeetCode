class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<double>v;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
                 v.push_back(nums1[i]);
                 i++;
        }
        while(j<nums2.size()){
                v.push_back(nums2[j]);
                j++;
            }
        
        int n=v.size();
        if (n == 0) {
            return 0.0;
        }
        if(n%2==0) return (v[n/2-1]+v[(n/2)])/2.0;
        else return v[(n/2)];
        
    }
};