class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>>ans;
        int start=in[0][0],end=in[0][1];
        for(int i=1;i<in.size();i++){
            if(in[i][0]<=end)end=max(end,in[i][1]);
            else {ans.push_back({start,end});
                 start=in[i][0];
                 end=in[i][1];}
                // ans.push_back({start,end});
        
    }
                        ans.push_back({start,end});

        return ans;
    }
};