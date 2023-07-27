class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<int>&vis,int node){
        vis[node]=1;
        for(int i=0;i<rooms[node].size();i++){
            if(vis[rooms[node][i]]==0){
                dfs(rooms,vis,rooms[node][i]);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        // vector<int>adj[n+1];
        // fro(int i=0;i<n;i++){
        //     int u=rooms[i][0];
        //     int v=rooms[i][1];
        //     adj[u].push_back(v);
        //     adj[v].push_back(u);
        // }
        vector<int>vis(n,0);
        dfs(rooms,vis,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0)return false;
        }
        return true;
    }
};