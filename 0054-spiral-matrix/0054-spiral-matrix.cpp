class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int total= m*n;
        int count=0;
        int sc=0,sr=0,ec=n-1,er=m-1;
        vector<int>ans;
        while(count<total)
        {for(int i=sc;i<=ec&&count<total;i++){
            ans.push_back(matrix[sr][i]);
            count++;
        }
        sr++;
        for(int i=sr;i<=er&&count<total;i++){
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;
        for(int i=ec;i>=sc&&count<total;i--){
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;
        for(int i=er;i>=sr&&count<total;i--){
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;}
        return ans;
    }
};