class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        sort(points.begin(),points.end(),cmp);
        int n=points.size(),i=1,temp=points[0][1];
        while(i<n){
            if(temp<points[i][0]){
                count++;
                temp=points[i][1];
            }
            i++;
        }
        return count;
    }
};