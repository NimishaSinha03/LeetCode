class Solution {
public:
    int mySqrt(int x) {
        int i=1,j=x;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mid<x/mid)i=mid+1;
            else if(mid>x/mid)j=mid-1;
            else return  mid;
        }
        return j;
    }
};