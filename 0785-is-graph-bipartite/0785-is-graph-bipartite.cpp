class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
           if (color[i]==-1){        
        queue<pair<int,int>>q;
        q.push({i,0});
        color[0]=0;
        while(!q.empty()){
            int front=q.front().first;
            int colour=q.front().second;
            q.pop();
            for( auto x:adj[front]){
                if(color[x]==-1){ 
                    color[x]=!colour;
                    q.push(make_pair(x,color[x]));
                }
                else if(color[x]==colour)return false;
            }
        }
        }
        }
        return true;
    }
};