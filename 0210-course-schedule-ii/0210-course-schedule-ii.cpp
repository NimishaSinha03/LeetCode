class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        queue<int>q;
        vector<int>ans;
        vector<int>indeg(numCourses ,0);
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i])indeg[it]++;
        }
        for(int i=0;i<numCourses ;i++)
            if(indeg[i]==0)q.push(i);
            while(!q.empty()){
                int front=q.front();
                ans.push_back(front);
                q.pop();
                for(auto it:adj[front]){
                    indeg[it]--;
                    if(indeg[it]==0)q.push(it);
                }
            
        }
        if(ans.size()==numCourses) return ans;
        else return vector<int>();
    }
};