class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        vector<vector<int>>mat= grid;
        for(int i=0;i<grid.size();i++){
            for(int j=i;j<grid.size();j++){
                swap(grid[i][j],grid[j][i]);
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j =0;j<grid.size();j++){
                if(grid[i]==mat[j])count++;
            }
        }
        return count;
    }
};
// nah, i am not submitting htis fucking solution ,, mene nahi kiya h na