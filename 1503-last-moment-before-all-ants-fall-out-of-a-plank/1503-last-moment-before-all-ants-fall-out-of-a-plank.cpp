class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int in=left.empty()?0:*max_element(left.begin(),left.end());
        int ax=right.empty()?n:*min_element(right.begin(),right.end());
    
    return max(in,n-ax);
    }
};

