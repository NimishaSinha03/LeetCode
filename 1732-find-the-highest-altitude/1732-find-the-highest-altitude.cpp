class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=gain[0];
        vector<int>v;
        v.push_back(0);
        v.push_back(sum);
        for(int i=1;i<gain.size();i++){
            sum+=gain[i];
            v.push_back(sum);
        }
        return *max_element(v.begin(),v.end());
    }
};