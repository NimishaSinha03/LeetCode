class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& p) {
    sort(p.begin(),p.end(),comp);
       int m=1,n=p.size(),i=1,temp=p[0][1];
        while(i<n){
            if(temp<p[i][0]){
                m++;
                temp=p[i][1];
            }
            i++;
        }
        return m;
    }
};