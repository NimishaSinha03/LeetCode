class Solution {
public:
    int longestString(int x, int y, int z) {
        int m=min(x,y);
        if(x!=y)
        return(2*m+1+z)*2;
        else return(2*m+z)*2;
    }
};