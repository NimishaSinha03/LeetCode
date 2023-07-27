class Solution {
public:
    void dfs(unordered_map<int,list<int>>&adj,vector<bool>&vis,int node){
        vis[node]=1;                                                      
        for(auto &it:adj[node]){
            if(vis[it]==0)dfs(adj,vis,it);
        }
        
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
//         make adj list
        // int n=connections.size();
        if(connections.size()<n-1) return -1;
        unordered_map<int,list<int>>adj;
        for(int i=0;i<connections.size();i++){
            int u=connections[i][0];
            int v=connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=-1;
        vector<bool>vis(n,0);
            // calling the dfs
            
            for(int i=0;i<n;++i){
                if(vis[i]==0){++ans; 
                dfs(adj,vis,i);}
        }
        return ans;
}
    
};

// class Solution {
// public:
//     void dfs(vector<vector<int>>& adj,int curr, vector<bool>& vis ){
//         vis[curr]=true;
//         for(auto& node:adj[curr]){
//             if(!vis[node]){
//                 dfs(adj,node,vis);
//             }
//         }
//     }
//     int makeConnected(int n, vector<vector<int>>& connections) {
//         if(connections.size()<n-1) return -1;

//         vector<bool>vis(n,false);
//         vector<vector<int>>adj(n); // adjacency matrix
//         for(auto& c:connections){
//             adj[c[0]].push_back(c[1]);
//             adj[c[1]].push_back(c[0]);
//         }
//         int conn=-1;
//         for(int i=0;i<n;++i){
//             if(!vis[i]){ // if not visited, a connected component is present that is unvisited
//                 ++conn;
//                 dfs(adj,i,vis);
//             }
//         }
//         return conn;
//     }
// };