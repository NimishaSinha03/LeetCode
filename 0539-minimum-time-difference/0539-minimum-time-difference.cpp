class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        vector<int>mins;
        for(int i=0;i<tp.size();i++){
           mins.push_back(((tp[i][0]-'0')*10+(tp[i][1]-'0'))*60+(tp[i][3]-'0')*10+(tp[i][4]-'0'));
        }
        sort(mins.begin(),mins.end());
        int ans=INT_MAX;
        for(int i=0;i<mins.size()-1;i++){
            ans=min(ans,mins[i+1]-mins[i]);
        }
        // mins.size()-1 is used because last element is already compared with the second last in the previoius iteration, also it is going to be compare to the first element further, so there is no need to compare the last element, and if we use mins.size() instead of mins.size()-1, then the vector will mive to mins[mins.size()+1], which obvio do not exsists, so it will give memory error
        ans=min(ans,1440-(mins[mins.size()-1]-mins[0]));
        return ans;
    }
};