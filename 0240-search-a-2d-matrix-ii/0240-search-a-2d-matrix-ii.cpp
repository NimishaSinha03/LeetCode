class Solution {
public:
   bool bs(vector<int>& matrix, int target){
        int n=matrix.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[mid]==target)return true;
            if(matrix[mid]<target)l=mid+1;
            else h=mid-1;
        }
            return false;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            if( bs(matrix[i],target))return true;
        }
        return false;
    }
};
