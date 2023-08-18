class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        // ans.push_back((1));
        for(int i=0;i<n;i++){
            ans.push_back(vector<int>(i+1,1));
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<ans[i].size()-1;j++)
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
    }
        return ans;
    }
};
// class Solution {
//  public:
//   vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> ans;

//     for (int i = 0; i < numRows; ++i)
//       ans.push_back(vector<int>(i + 1, 1));

//     for (int i = 2; i < numRows; ++i)
//       for (int j = 1; j < ans[i].size() - 1; ++j)
//         ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];

//     return ans;
//   }
// };