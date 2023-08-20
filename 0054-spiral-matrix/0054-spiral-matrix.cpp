class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int total=n*m;
        int count=0;
        vector<int>v;
        int sr=0;
        int sc=0;
        int er=n-1;
        int ec=m-1;
        while(count<total)
        {for(int i=sc;i<=ec&&count<total;i++){
            v.push_back(matrix[sr][i]);
            count++;
        }
        sr++;
        for(int i=sr;i<=er&&count<total;i++){
            v.push_back(matrix[i][ec]);
            count++;
        }
        ec--;
        for(int i=ec;i>=sc&&count<total;i--){
            v.push_back(matrix[er][i]);
            count++;
        }
        er--;
        for(int i=er;i>=sr&&count<total;i--){
            v.push_back(matrix[i][sc]);
            count++;
        }
        sc++;}
        return v;
        
    }
};