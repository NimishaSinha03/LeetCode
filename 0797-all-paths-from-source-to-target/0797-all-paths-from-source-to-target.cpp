class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> ans;
        vector<int>path;
        queue<vector<int>>q;
        q.push({0});
        while(!q.empty()){
            path=q.front();
            q.pop();
            int last=path.back();
            if(last==n-1)ans.push_back(path);
            for(auto x:graph[last]){
                vector<int>temp=path;
                temp.push_back(x);
                q.push(temp);
            }
        }
        return ans;
    }
};