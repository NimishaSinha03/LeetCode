class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int r=m.size();
        int c=m[0].size();
        int l=0, h=r*c-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(m[mid/c][mid%c]==target)return true;
            else if(m[mid/c][mid%c]<target)l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};