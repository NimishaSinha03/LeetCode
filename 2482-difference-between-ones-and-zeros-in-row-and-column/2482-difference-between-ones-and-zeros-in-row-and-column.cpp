class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>orow(grid.size(),0);
        vector<int>ocol(grid[0].size(),0);
        vector<int>zrow(grid.size(),0);
        vector<int>zcol(grid[0].size(),0);
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)zrow[i]++;
                    else orow[i]++;
            }
        }
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==0)zcol[i]++;
                    else ocol[i]++;
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans[i][j]=orow[i] + ocol[j] - zrow[i] - zcol[j];
            }
        }
        return ans;
    }
};