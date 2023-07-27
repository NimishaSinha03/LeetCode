class Solution {
public:
    bool isBipartite(int node,vector<int>adj[],vector<int>&color){
        queue<int>q;
        q.push(node);
        color[node]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto neigh:adj[front]){
                if(color[neigh]==-1){color[neigh]=!color[front];
                q.push(neigh);}
                else if(color[neigh]==color[front])return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        int s=dislikes.size();
       vector<int>adj[n+1];
        for(int i=0;i<s;i++){
            int u=dislikes[i][0];
            int v=dislikes[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>color(n+1,-1);
        for(int i=1;i<=n;++i){
            if(color[i]==-1){
                if(!isBipartite(i,adj,color))return false;
            }
        }
        return true; 
    }
}; 