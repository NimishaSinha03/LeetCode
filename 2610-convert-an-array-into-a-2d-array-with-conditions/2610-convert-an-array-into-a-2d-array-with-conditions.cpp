class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int>mp;
        // put all elements of  nums into map
        for(auto i:nums){
            mp[i]++;
        }
        // get the element with the maximum frequency-->number of rows in thee 2-d matrix
        int maxi=0;
        for(auto i:mp){
            maxi=max(maxi,i.second);
        }
        vector<vector<int>>ans;
        // onec you have the maximum element , you know the number of rows, iterate all through the number of rows
        for(int i=0;i<maxi;i++){
            // a vector for each row element
            vector<int>temp;
            for(auto &i:mp){
                // iterate through the while map and push the first element in the temp--> the first row(important step-->visulalize it )
            if(i.second>0){
                temp.push_back(i.first);
                i.second--;
            }
            }
                ans.push_back(temp);
        }
        return ans;
    }
};